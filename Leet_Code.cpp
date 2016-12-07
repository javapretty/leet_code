/*
 * Leet_Code.cpp
 *
 *  Created on: 2016年12月7日
 *      Author: zhangyalei
 */

#include "Leet_Code.h"

vector<int> countBits(int num) {
	vector<int> vec(num+1, 0);
	for(int i=0; i<=num; ++i) {
		vec[i] = i%2 + vec[i/2];
	}
	return vec;
}

string reverseString(string s) {
	int length = s.length();
	char c;
	for(int i=0; i<length/2; ++i) {
		c = s[i];
		s[i] = s[length-i-1];
		s[length-i-1] = c;
	}
	return s;
}


