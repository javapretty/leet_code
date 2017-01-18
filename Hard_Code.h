/*
 * Hard_Code.h
 *
 *  Created on: 2017年1月10日
 *      Author: zhangyalei
 */

#ifndef HARD_CODE_H_
#define HARD_CODE_H_

#include "Base_Define.h"

//测试用例
int test_hard_code(void);

/*
460. LFU Cache
	Design and implement a data structure for Least Frequently Used (LFU) cache. It should support the following operations: get and put.
	get(key) - Get the value (will always be positive) of the key if the key exists in the cache, otherwise return -1.
	put(key, value) - Set or insert the value if the key is not already present. When the cache reaches its capacity, it should invalidate the least frequently used item before inserting a new item. For the purpose of this problem, when there is a tie (i.e., two or more keys that have the same frequency), the least recently used key would be evicted.
Follow up:
	Could you do both operations in O(1) time complexity?
Example:
	LFUCache cache = new LFUCache(2(capacity));
	cache.put(1, 1);
	cache.put(2, 2);
	cache.get(1);       // returns 1
	cache.put(3, 3);    // evicts key 2
	cache.get(2);       // returns -1 (not found)
	cache.get(3);       // returns 3.
	cache.put(4, 4);    // evicts key 1.
	cache.get(1);       // returns -1 (not found)
	cache.get(3);       // returns 3
	cache.get(4);       // returns 4
 */
/*
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache obj = new LFUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
  */
class LFUCache {
public:
	LFUCache(int capacity) {}

	int get(int key) {
		return 0;
	}

	void put(int key, int value) {

	}
};

#endif /* HARD_CODE_H_ */
