/*
 * Test_Code.cpp
 *
 *  Created on: 2017年1月18日
 *      Author: zhangyalei
 */

#include "Easy_Code.h"
#include "Medium_Code.h"
#include "Hard_Code.h"

int test_easy_code(void) {
	cout << "---------------test easy code begin---------------" << endl;

	//136
	cout << "-----------136-----------" << endl;
	vector<int> vec_136;
	for(int i = 0; i < 20; ++i) {
		vec_136.push_back(i % 10);
	}
	vec_136.push_back(10);
	cout << singleNumber(vec_136) << endl;

	//231
	cout << "-----------231-----------" << endl;
	for(int i = 1; i <= 9; ++i) {
		cout << isPowerOfTwo(i) << "\t";
	}
	cout << endl;
	//326
	cout << "-----------326-----------" << endl;
	for(int i = 1; i <= 9; ++i) {
		cout << isPowerOfThree(i) << "\t";
	}
	cout << endl;
	//342
	cout << "-----------342-----------" << endl;
	for(int i = 1; i <= 9; ++i) {
		cout << isPowerOfFour(i) << "\t";
	}
	cout << endl;

	//258
	cout << "-----------258-----------" << endl;
	for(int i = 901; i <= 909; ++i) {
		cout << addDigits(i) << "\t";
	}
	cout << endl;

	//292
	cout << "-----------292-----------" << endl;
	for(int i = 1; i <= 9; ++i) {
		cout << canWinNim(i) << "\t";
	}
	cout << endl;

	//338
	cout << "-----------338-----------" << endl;
	vector<int> vec_338 = countBits(8);
	for(vector<int>::iterator iter = vec_338.begin(); iter != vec_338.end(); ++iter) {
		cout << *iter << "\t";
	}
	cout << endl;

	//344
	cout << "-----------344-----------" << endl;
	cout << reverseString("qwertyuiop") << endl;

	//371
	cout << "-----------371-----------" << endl;
	cout << getSum(10, 101) << endl;

	//383
	cout << "-----------383-----------" << endl;
	cout << canConstruct("abcd", "abecd") << endl;

	//387
	cout << "-----------387-----------" << endl;
	cout << firstUniqChar("loveleetcode") << endl;

	//389
	cout << "-----------389-----------" << endl;
	cout << findTheDifference("abcd", "abecd") << endl;

	//412
	cout << "-----------412-----------" << endl;
	vector<string> vec_412 = fizzBuzz(15);
	for(vector<string>::iterator iter = vec_412.begin(); iter != vec_412.end(); ++iter) {
		cout << *iter << "\t";
	}
	cout << endl;

	//448
	cout << "-----------448-----------" << endl;
	vector<int> vec_448;
	vec_448.push_back(5);
	vec_448.push_back(5);
	vec_448.push_back(1);
	vec_448.push_back(3);
	vec_448.push_back(3);
	vector<int> vec_448_res = findDisappearedNumbers(vec_448);
	for(vector<int>::iterator iter = vec_448_res.begin(); iter != vec_448_res.end(); ++iter) {
		cout << *iter << "\t";
	}
	cout << endl;

	//461
	cout << "-----------461-----------" << endl;
	cout << hammingDistance(1, 4) << endl;

	//476
	cout << "-----------476-----------" << endl;
	for(int i = 1; i <= 9; ++i) {
		cout << findComplement(i) << "\t";
	}
	cout << endl;

	//485
	cout << "-----------485-----------" << endl;
	vector<int> vec_485;
	vec_485.push_back(1);
	vec_485.push_back(0);
	vec_485.push_back(1);
	vec_485.push_back(1);
	vec_485.push_back(1);
	cout << findMaxConsecutiveOnes(vec_485) << endl;

	cout << "---------------test easy code end-----------------" << endl;
	return 0;
}

int test_medium_code(void) {
	cout << "---------------test medium code begin-------------" << endl;
	cout << "---------------test medium code end---------------" << endl;
	return 0;
}

int test_hard_code(void) {
	cout << "---------------test hard code begin---------------" << endl;
	cout << "---------------test hard code end-----------------" << endl;
	return 0;
}
