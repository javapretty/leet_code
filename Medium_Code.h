/*
 * Medium_Code.h
 *
 *  Created on: 2017年1月10日
 *      Author: zhangyalei
 */

#ifndef MEDIUM_CODE_H_
#define MEDIUM_CODE_H_

#include "Base_Define.h"

/*388. Longest Absolute File Path
	The string "dir\n\tsubdir1\n\tsubdir2\n\t\tfile.ext" represents:
	dir
		subdir1
		subdir2
			file.ext
	The directory dir contains an empty sub-directory subdir1 and a sub-directory subdir2 containing a file file.ext.

	The string "dir\n\tsubdir1\n\t\tfile1.ext\n\t\tsubsubdir1\n\tsubdir2\n\t\tsubsubdir2\n\t\t\tfile2.ext" represents:
	dir
		subdir1
			file1.ext
			subsubdir1
		subdir2
			subsubdir2
				file2.ext
	The directory dir contains two sub-directories subdir1 and subdir2. subdir1 contains a file file1.ext and an empty second-level sub-directory subsubdir1. subdir2 contains a second-level sub-directory subsubdir2 containing a file file2.ext.

	We are interested in finding the longest (number of characters) absolute path to a file within our file system. For example, in the second example above, the longest absolute path is "dir/subdir2/subsubdir2/file2.ext", and its length is 32 (not including the double quotes).
	Given a string representing the file system in the above format, return the length of the longest absolute path to file in the abstracted file system. If there is no file in the system, return 0.
Note:
	The name of a file contains at least a . and an extension.
	The name of a directory or sub-directory will not contain a ..
	Time complexity required: O(n) where n is the size of the input string.
	Notice that a/aa/aaa/file1.txt is not the longest file path, if there is another path aaaaaaaaaaaaaaaaaaaaa/sth.png.
 */
int lengthLongestPath(string input);

/*
433. Minimum Genetic Mutation
	A gene string can be represented by an 8-character long string, with choices from "A", "C", "G", "T".
	Suppose we need to investigate about a mutation (mutation from "start" to "end"), where ONE mutation is defined as ONE single character changed in the gene string.
	For example, "AACCGGTT" -> "AACCGGTA" is 1 mutation.
	Also, there is a given gene "bank", which records all the valid gene mutations. A gene must be in the bank to make it a valid gene string.
	Now, given 3 things - start, end, bank, your task is to determine what is the minimum number of mutations needed to mutate from "start" to "end". If there is no such a mutation, return -1.
Note:
	Starting point is assumed to be valid, so it might not be included in the bank.
	If multiple mutations are needed, all mutations during in the sequence must be valid.
	You may assume start and end string is not the same.
Example 1:
	start: "AACCGGTT"
	end:   "AACCGGTA"
	bank: ["AACCGGTA"]
	return: 1
Example 2:
	start: "AACCGGTT"
	end:   "AAACGGTA"
	bank: ["AACCGGTA", "AACCGCTA", "AAACGGTA"]
	return: 2
Example 3:
	start: "AAAAACCC"
	end:   "AACCCCCC"
	bank: ["AAAACCCC", "AAACCCCC", "AACCCCCC"]
	return: 3
 */
int minMutation(string start, string end, vector<string>& bank);

/*
445. Add Two Numbers II
	You are given two non-empty linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
	You may assume the two numbers do not contain any leading zero, except the number 0 itself.
Follow up:
	What if you cannot modify the input lists? In other words, reversing the lists is not allowed.
Example:
	Input: (7 -> 2 -> 4 -> 3) + (5 -> 6 -> 4)
	Output: 7 -> 8 -> 0 -> 7
 */
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

/*
450. Delete Node in a BST
	Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return the root node reference (possibly updated) of the BST.
	Basically, the deletion can be divided into two stages:
	Search for a node to remove.
	If the node is found, delete the node.
Note: Time complexity should be O(height of tree).
Example:
	root = [5,3,6,2,4,null,7]
	key = 3
		5
	   / \
	  3   6
	 / \   \
	2   4   7
	Given key to delete is 3. So we find the node with value 3 and delete it.

	One valid answer is [5,4,6,2,null,null,7], shown in the following BST.
		5
	   / \
	  4   6
	 /     \
	2       7
	Another valid answer is [5,2,6,null,4,null,7].
		5
	   / \
	  2   6
	   \   \
		4   7
 */
TreeNode* deleteNode(TreeNode* root, int key);

/*
457. Circular Array Loop
	You are given an array of positive and negative integers. If a number n at an index is positive, then move forward n steps. Conversely, if it's negative (-n), move backward n steps. Assume the first element of the array is forward next to the last element, and the last element is backward next to the first element. Determine if there is a loop in this array. A loop starts and ends at a particular index with more than 1 element along the loop. The loop must be "forward" or "backward'.
Example 1: Given the array [2, -1, 1, 2, 2], there is a loop, from index 0 -> 2 -> 3 -> 0.
Example 2: Given the array [-1, 2], there is no loop.
Note: The given array is guaranteed to contain no element "0".
	Can you do it in O(n) time complexity and O(1) space complexity?
 */
bool circularArrayLoop(vector<int>& nums);

/*482. License Key Formatting
	Now you are given a string S, which represents a software license key which we would like to format. The string S is composed of alphanumerical characters and dashes. The dashes split the alphanumerical characters within the string into groups. (i.e. if there are M dashes, the string is split into M+1 groups). The dashes in the given string are possibly misplaced.
	We want each group of characters to be of length K (except for possibly the first group, which could be shorter, but still must contain at least one character). To satisfy this requirement, we will reinsert dashes. Additionally, all the lower case letters in the string must be converted to upper case.
	So, you are given a non-empty string S, representing a license key to format, and an integer K. And you need to return the license key formatted according to the description above.
Example 1:
	Input: S = "2-4A0r7-4k", K = 4
	Output: "24A0-R74K"
	Explanation: The string S has been split into two parts, each part has 4 characters.
Example 2:
	Input: S = "2-4A0r7-4k", K = 3
	Output: "24-A0R-74K"
	Explanation: The string S has been split into three parts, each part has 3 characters except the first part as it could be shorter as said above.
Note:
	The length of string S will not exceed 12,000, and K is a positive integer.
	String S consists only of alphanumerical characters (a-z and/or A-Z and/or 0-9) and dashes(-).
	String S is non-empty.
*/
string licenseKeyFormatting(string S, int K);

#endif /* MEDIUM_CODE_H_ */
