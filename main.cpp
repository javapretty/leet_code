/*
 * main.cpp
 *
 *  Created on: 2016年12月7日
 *      Author: zhangyalei
 */

#include "Leet_Code.h"

int main() {
	//338
	vector<int> vec_338 = countBits(8);
	for(vector<int>::iterator iter = vec_338.begin(); iter != vec_338.end(); ++iter) {
		cout << *iter << "\t";
	}
	cout << endl;

	//344
	cout << reverseString("qwertyuiop") << endl;
	return 0;
}


