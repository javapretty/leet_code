/*
 * Leet_Code.cpp
 *
 *  Created on: 2016年12月7日
 *      Author: zhangyalei
 */

#include "Leet_Code.h"

//136
int singleNumber(vector<int>& nums) {
	int num = 0;
	for (int i = 0; i < (int)nums.size(); ++i) {
		num ^= nums[i];
	}
	return num;
}

//258
int addDigits(int num) {
	if(num == 0) {
		return 0;
	}

	int mod = num % 9;
	if(mod == 0) {
		return 9;
	}
	else {
		return mod;
	}
}

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

//461
int hammingDistance(int x, int y) {
	int dist = 0;
	unsigned int val = x ^ y;

  //Count the number of bits set
	while (val != 0) {
		//A bit is set, so increment the count and clear the bit
		dist++;
		val &= val - 1;
    }

	//Return the number of differing bits
	return dist;
}

//463
int islandPerimeter(vector<vector<int>>& grid) {
	int count=0, repeat=0;
	for(int i=0;i<(int)grid.size();i++) {
		for(int j=0; j<(int)grid[i].size();j++) {
			if(grid[i][j]==1) {
				count ++;
				//如果上面是1，重复次数加1
				if(i!=0 && grid[i-1][j] == 1) repeat++;
				//如果左边是1，重复次数加1
				if(j!=0 && grid[i][j-1] == 1) repeat++;
			}
		}
	}
	return 4*count-repeat*2;
}
