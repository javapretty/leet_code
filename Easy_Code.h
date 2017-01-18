/*
 * Leet_Code.h
 *
 *  Created on: 2016年12月7日
 *      Author: zhangyalei
 */

#ifndef EASY_CODE_H_
#define EASY_CODE_H_

#include "Base_Define.h"

//测试用例
int test_easy_code(void);

/*
100. Same Tree
	Given two binary trees, write a function to check if they are equal or not.
	Two binary trees are considered equal if they are structurally identical and the nodes have the same value.
 */
bool isSameTree(TreeNode* p, TreeNode* q);

/*104. Maximum Depth of Binary Tree 求二叉树最大深度
	Given a binary tree, find its maximum depth.
	The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
*/
int maxDepth(TreeNode* root);

/*226.Invert Binary Tree 反转二叉树
	Invert a binary tree.
		 4
	   /   \
	  2     7
	 / \   / \
	1   3 6   9
	to
		 4
	   /   \
	  7     2
	 / \   / \
	9   6 3   1
*/
TreeNode* invertTree(TreeNode* root);

/*136. Single Number 找出数组中出现一次的元素
	Given an array of integers, every element appears twice except for one. Find that single one.
	Note:
	Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
*/
int singleNumber(vector<int>& nums);

/*231. Power of Two 判断整数是否是2的幂数
	Given an integer, write a function to determine if it is a power of two.
*/
bool isPowerOfTwo(int n);

/*326. Power of Three 判断整数是否是3的幂数
	Given an integer, write a function to determine if it is a power of three.
Follow up: Could you solve it without loops/recursion?
*/
bool isPowerOfThree(int n);

/*342. Power of Four 判断整数是否是4的幂数
	Given an integer (signed 32 bits), write a function to check whether it is a power of 4.
Example:
	Given num = 16, return true. Given num = 5, return false.
Follow up: Could you solve it without loops/recursion?
*/
bool isPowerOfFour(int num);

/*
237. Delete Node in a Linked List
	Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.
	Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, the linked list should become 1 -> 2 -> 4 after calling your function.
 */
void deleteNode(ListNode* node);

/*258. Add Digits	将整数各位相加，直到只有一位
	Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
For example:
	Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
Follow up:
	Could you do it without any loop/recursion in O(1) runtime?
*/
int addDigits(int num);

/*283. Move Zeroes 将0移动到数组尾部
	Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].
Note:
	You must do this in-place without making a copy of the array.
	Minimize the total number of operations.
*/
void moveZeroes(vector<int>& nums);

/*292. Nim Game 最后一个数完数字的玩家获胜
	You are playing the following Nim Game with your friend: There is a heap of stones on the table, each time one of you take turns to remove 1 to 3 stones. The one who removes the last stone will be the winner. You will take the first turn to remove the stones.
	Both of you are very clever and have optimal strategies for the game. Write a function to determine whether you can win the game given the number of stones in the heap.
For example, if there are 4 stones in the heap, then you will never win the game: no matter 1, 2, or 3 stones you remove, the last stone will always be removed by your friend.
Hint:
	If there are 5 stones in the heap, could you figure out a way to remove the stones such that you will always be the winner?
*/
bool canWinNim(int n);

/*338. Counting Bits 计算1到num每个整数中1个数，返回一个数组
	Given a non negative integer number num.
	For every numbers i in the range 0 ≤ i ≤ num calculate the number
	of 1's in their binary representation and return them as an array.
*/
vector<int> countBits(int num);

/*344. Reverse String 反转字符串
	Write a function that takes a string as input and returns the string reversed.
*/
string reverseString(string s);

/*
349. Intersection of Two Arrays
	Given two arrays, write a function to compute their intersection.
Example:
	Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2].
Note:
	Each element in the result must be unique.
	The result can be in any order.
 */
vector<int> intersection(vector<int>& nums1, vector<int>& nums2);

/*371. Sum of Two Integers 不用+实现两个整数相加
	Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -
*/
int getSum(int a, int b);

/*383. Ransom Note 判断字符串是否是另外一个字符串子串
	Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.
	Each letter in the magazine string can only be used once in your ransom note.
Note:
	You may assume that both strings contain only lowercase letters.
	canConstruct("a", "b") -> false
	canConstruct("aa", "ab") -> false
	canConstruct("aa", "aab") -> true
*/
bool canConstruct(string ransomNote, string magazine);

/*
387. First Unique Character in a String
	Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.
Examples:
	s = "leetcode"
	return 0.
	s = "loveleetcode",
	return 2.
Note: You may assume the string contain only lowercase letters.
 */
int firstUniqChar(string s);

/*389. Find the Difference 找到两个字符串中不同的字符
	Given two strings s and t which consist of only lowercase letters.
	String t is generated by random shuffling string s and then add one more letter at a random position.
	Find the letter that was added in t.
*/
char findTheDifference(string s, string t);

/*
404. Sum of Left Leaves
	Find the sum of all left leaves in a given binary tree.
Example:
    3
   / \
  9  20
    /  \
   15   7
There are two left leaves in the binary tree, with values 9 and 15 respectively. Return 24.
 */
int sumOfLeftLeaves(TreeNode* root);

/*412. Fizz Buzz
	Write a program that outputs the string representation of numbers from 1 to n.
	But for multiples of three it should output “Fizz” instead of the number and
	for the multiples of five output “Buzz”.
	For numbers which are multiples of both three and five output “FizzBuzz”.
*/
vector<string> fizzBuzz(int n);

/*448. Find All Numbers Disappeared in an Array 找到数组中没有出现的数
	Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.
	Find all the elements of [1, n] inclusive that do not appear in this array.
	Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.
Example:
	Input:
	[4,3,2,7,8,2,3,1]
	Output:
	[5,6]
*/
vector<int> findDisappearedNumbers(vector<int>& nums);

/*
453. Minimum Moves to Equal Array Elements
	Given a non-empty integer array of size n, find the minimum number of moves required to make all array elements equal, where a move is incrementing n - 1 elements by 1.
Example:
	Input:[1,2,3]
	Output:3
Explanation:
	Only three moves are needed (remember each move increments two elements):
	[1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]
 */
int minMoves(vector<int>& nums);

/*455. Assign Cookies 给贪婪的孩子分配小甜饼
	Assume you are an awesome parent and want to give your children some cookies.
	But, you should give each child at most one cookie. Each child i has a greed factor gi,
	which is the minimum size of a cookie that the child will be content with;
	and each cookie j has a size sj. If sj >= gi, we can assign the cookie j to the child i,
	and the child i will be content. Your goal is to maximize the number of your content
	children and output the maximum number.
Note:
	You may assume the greed factor is always positive.
	You cannot assign more than one cookie to one child.
Example 1:
	Input: [1,2,3], [1,1]
	Output: 1
Explanation: You have 3 children and 2 cookies. The greed factors of 3 children are 1, 2, 3.
	And even though you have 2 cookies, since their size is both 1, you could only make the child whose greed factor is 1 content.
	You need to output 1.
Example 2:
	Input: [1,2], [1,2,3]
Output: 2
Explanation: You have 2 children and 3 cookies. The greed factors of 2 children are 1, 2.
	You have 3 cookies and their sizes are big enough to gratify all of the children,
	You need to output 2.
 */
int findContentChildren(vector<int>& g, vector<int>& s);

/*458. Poor Pigs
	There are 1000 buckets, one and only one of them contains poison, the rest are filled with water. They all look the same. If a pig drinks that poison it will die within 15 minutes. What is the minimum amount of pigs you need to figure out which bucket contains the poison within one hour.
	Answer this question, and write an algorithm for the follow-up general case.
Follow-up:
	If there are n buckets and a pig drinking poison will die within m minutes, how many pigs (x) you need to figure out the "poison" bucket within p minutes? There is exact one bucket with poison.
 */
int poorPigs(int buckets, int minutesToDie, int minutesToTest);

/*461. Hamming Distance 计算两个整数的汉明距离
	The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
	Given two integers x and y, calculate the Hamming distance.
*/
int hammingDistance(int x, int y);

/*463. Island Perimeter 计算岛的周长
	You are given a map in form of a two-dimensional integer grid where 1 represents land and 0
	represents water. Grid cells are connected horizontally/vertically (not diagonally).
	The grid is completely surrounded by water, and there is exactly one island
	(i.e., one or more connected land cells). The island doesn't have "lakes"
	(water inside that isn't connected to the water around the island).
	One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.
Example:
	[[0,1,0,0],
	 [1,1,1,0],
 	 [0,1,0,0],
 	 [1,1,0,0]]
Answer: 16
*/
int islandPerimeter(vector<vector<int>>& grid);

/*476. Number Complement 将一个整数的二进制反转
	Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.
Note:
	The given integer is guaranteed to fit within the range of a 32-bit signed integer.
	You could assume no leading zero bit in the integer’s binary representation.
Example 1:
	Input: 5
	Output: 2
	Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.
*/
int findComplement(int num);

/*
485. Max Consecutive Ones
	Given a binary array, find the maximum number of consecutive 1s in this array.
Example 1:
	Input: [1,1,0,1,1,1]
	Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s.
    The maximum number of consecutive 1s is 3.
Note:
	The input array will only contain 0 and 1.
	The length of input array is a positive integer and will not exceed 10,000
 */
int findMaxConsecutiveOnes(vector<int>& nums);

#endif /* EASY_CODE_H_ */
