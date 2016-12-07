/*
 * main.cpp
 *
 *  Created on: 2016年12月7日
 *      Author: zhangyalei
 */

#include "Leet_Code.h"

int main() {
	//338
	cout << "338 problem begin" << endl;
	vector<int> vec_338 = countBits(8);
	for(vector<int>::iterator iter = vec_338.begin(); iter != vec_338.end(); ++iter) {
		cout << *iter << "\t";
	}
	cout << endl << "338 problem end" << endl;

	//344
	cout << "344 problem begin" << endl;
	cout << reverseString("qwertyuiop") << endl;
	cout << "344 problem end" << endl;

	//371
	cout << "371 problem begin" << endl;
	cout << getSum(10, 101) << endl;
	cout << "371 problem end" << endl;

	//412
	cout << "412 problem begin" << endl;
	vector<string> vec_412 = fizzBuzz(15);
	for(vector<string>::iterator iter = vec_412.begin(); iter != vec_412.end(); ++iter) {
		cout << *iter << "\t";
	}
	cout << endl << "412 problem end" << endl;
	return 0;
}


