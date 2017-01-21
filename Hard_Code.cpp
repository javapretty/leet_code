/*
 * Hard_Code.cpp
 *
 *  Created on: 2017年1月10日
 *      Author: zhangyalei
 */

#include "Hard_Code.h"

//146
LRUCache::LRUCache(int capacity) : capacity(capacity) { }

int LRUCache::get(int key) {
	// If key is not found in hash map, return -1
	if (cache.find(key) == cache.end())
		return -1;
	// Move the (key, value) pair to the beginning of the list
	items.splice(items.begin(), items, cache[key]);
	return cache[key]->second;
}

void LRUCache::put(int key, int value) {
	// The key is not in the hash table
	if (cache.find(key) == cache.end()) {
		// If the cache is full then delete the least recently
		// used item, which is at the end of the list
		if ((int)items.size() == capacity) {
			cache.erase(items.back().first);
			items.pop_back();
		}
		items.push_front(make_pair(key, value));
		cache[key] = items.begin();
	} else {
		// Update the value associated with the key
		cache[key]->second = value;
		// Move the (key, value) pair to the beginning of the list
		items.splice(items.begin(), items, cache[key]);
	}
}

//460
LFUCache::LFUCache(int capacity):cap(capacity),size(0),minFreq(0) {

}

int LFUCache::get(int key) {
	if(m.count(key)==0) return -1;

	fm[m[key].second].erase(mIter[key]);
	m[key].second++;
	fm[m[key].second].push_back(key);
	mIter[key]=--fm[m[key].second].end();

	if(fm[minFreq].size()==0 )
		  minFreq++;

	return m[key].first;
}

void LFUCache::put(int key, int value) {
	if(cap<=0) return;

	int storedValue=get(key);
	if(storedValue!=-1)
	{
		m[key].first=value;
		return;
	}

	if(size>=cap )
	{
		m.erase( fm[minFreq].front() );
		mIter.erase( fm[minFreq].front() );
		fm[minFreq].pop_front();
		size--;
	}

	m[key]={value, 1};
	fm[1].push_back(key);
	mIter[key]=--fm[1].end();
	minFreq=1;
	size++;
}
