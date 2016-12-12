/*
 * Leet_Code.h
 *
 *  Created on: 2016年12月7日
 *      Author: zhangyalei
 */

#ifndef LEET_CODE_H_
#define LEET_CODE_H_

#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*136
 Given an array of integers, every element appears twice except for one. Find that single one.
	Note:
	Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
*/
int singleNumber(vector<int>& nums);

/*258
	Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
	For example:
	Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
	Follow up:
	Could you do it without any loop/recursion in O(1) runtime?
*/
int addDigits(int num);

/*338
	Given a non negative integer number num.
	For every numbers i in the range 0 ≤ i ≤ num calculate the number
	of 1's in their binary representation and return them as an array.
*/
vector<int> countBits(int num);

/*344
	Write a function that takes a string as input and returns the string reversed.
*/
string reverseString(string s);

/*371
	Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -
*/
int getSum(int a, int b);

/*412
	Write a program that outputs the string representation of numbers from 1 to n.
	But for multiples of three it should output “Fizz” instead of the number and
	for the multiples of five output “Buzz”.
	For numbers which are multiples of both three and five output “FizzBuzz”.
*/
vector<string> fizzBuzz(int n);

#endif /* LEET_CODE_H_ */
