/*
 * Base_Define.h
 *
 *  Created on: 2017年1月18日
 *      Author: zhangyalei
 */

#ifndef BASE_DEFINE_H_
#define BASE_DEFINE_H_

#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//测试用例
int test_easy_code(void);
int test_medium_code(void);
int test_hard_code(void);

#endif /* BASE_DEFINE_H_ */
