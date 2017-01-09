/*
 * main.cpp
 *
 *  Created on: 2016年12月7日
 *      Author: zhangyalei
 */

#include "Leet_Code.h"

int main() {
	//136
	cout << "-----------136-----------" << endl;
	vector<int> vec_136;
	for(int i = 0; i < 20; ++i) {
		vec_136.push_back(i % 10);
	}
	vec_136.push_back(10);
	cout << singleNumber(vec_136) << endl;

	//258
	cout << "-----------258-----------" << endl;
	for(int i = 901; i <= 909; ++i) {
		cout << addDigits(i) << "\t";
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

	//412
	cout << "-----------412-----------" << endl;
	vector<string> vec_412 = fizzBuzz(15);
	for(vector<string>::iterator iter = vec_412.begin(); iter != vec_412.end(); ++iter) {
		cout << *iter << "\t";
	}
	cout << endl;

	//461
	cout << "-----------461-----------" << endl;
	cout << hammingDistance(1, 4) << endl;
	return 0;
}


