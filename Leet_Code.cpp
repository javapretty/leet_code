/*
 * Leet_Code.cpp
 *
 *  Created on: 2016年12月7日
 *      Author: zhangyalei
 */

#include "Leet_Code.h"

//338
vector<int> countBits(int num) {
	vector<int> vec(num+1, 0);
	for(int i=0; i<=num; ++i) {
		vec[i] = i%2 + vec[i/2];
	}
	return vec;
}

//344
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

//371
int getSum(int a, int b) {
	int r1 = a & b, r2 = a ^ b;
	return r1 == 0 ? r2 : getSum(r2, r1 << 1);
}

//412
vector<string> fizzBuzz(int n) {
	vector<string> vec;
	for(int i=1; i<=n; ++i) {
		if((i%15==0)) {
			vec.push_back("FizzBuzz");
		}
		else if(i%5==0) {
			vec.push_back("Buzz");
		}
		else if(i%3==0) {
			vec.push_back("Fizz");
		}
		else {
			vec.push_back(to_string(i));
		}
	}
	return vec;
}

