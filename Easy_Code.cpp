/*
 * Leet_Code.cpp
 *
 *  Created on: 2016年12月7日
 *      Author: zhangyalei
 */

#include <algorithm>
#include <cmath>
#include <stack>
#include "Easy_Code.h"

int test_easy_code(void) {
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
	return 0;
}

//104
int maxDepth(TreeNode* root) {
	 return root == NULL ? 0 : max(maxDepth(root -> left), maxDepth(root -> right)) + 1;
}

//226
TreeNode* invertTree(TreeNode* root) {
	//Recursive
	//if (root) {
	//	invertTree(root->left);
	//	invertTree(root->right);
	//	std::swap(root->left, root->right);
	//}
	//return root;

	//Non-Recursive
	stack<TreeNode*> stk;
	stk.push(root);

	while (!stk.empty()) {
		TreeNode* p = stk.top();
		stk.pop();
		if (p) {
			stk.push(p->left);
			stk.push(p->right);
			std::swap(p->left, p->right);
		}
	}
	return root;
}

//136
int singleNumber(vector<int>& nums) {
	int num = 0;
	for (int i = 0; i < (int)nums.size(); ++i) {
		num ^= nums[i];
	}
	return num;
}

//231
bool isPowerOfTwo(int n) {
	return n > 0 && !(n&(n-1));
}

//326
bool isPowerOfThree(int n) {
	//if(n == 0) return false;
	//double x = log10(n) / log10(3);
	//return floor(x) == x;
  if (n <= 0) return false;
  //3^19=1162261467, 3^20 = 3486784401 > MaxInt32
  return 1162261467 % n == 0;
}

//342
bool isPowerOfFour(int num) {
	return num > 0 && (num & (num - 1)) == 0 && (num - 1) % 3 == 0;
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

//283
void moveZeroes(vector<int>& nums) {
  for (int i = 0, j = 0; i < (int)nums.size(); i++)  {
	  if (nums[i] != 0)
		  swap(nums[i], nums[j++]);
    }
}

//292
bool canWinNim(int n) {
	//return n%4 ;
	return n&3;
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

//383
bool canConstruct(string ransomNote, string magazine) {
	for(int i=0;i<(int)ransomNote.length();i++){
		if(magazine.find(ransomNote[i])!=string::npos)
			magazine[magazine.find(ransomNote[i])]='\0';
		else
			return false;
	}
	return true;
}

//389
char findTheDifference(string s, string t) {
	//Initialize variables to store sum of ASCII codes for each string
	int charCodeS = 0, charCodeT = 0;
	// Iterate through both strings and char codes
	for (int i = 0; i < (int)s.length(); ++i) {
		charCodeS += (int)s[i];
	}
	for (int i = 0; i < (int)t.length(); ++i) {
		charCodeT += (int)t[i];
	}

	// Return the difference between 2 strings as char
	return (char)(charCodeT - charCodeS);
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

//448 The basic idea here is to label all appeared numbers in the array.
//Since we don't want to introduce extra space and given all numbers are positive(from 1 to n),
//negate the value in the corresponding position is one choice. Ex, for input like [1, 2, 2], after the first sweep, it becomes [-1, -2, 2]. At position index=2,
//there is a positive value, which means it corresponding value 3 is not showing.
vector<int> findDisappearedNumbers(vector<int>& nums) {
	int len = nums.size();
	for(int i=0; i<len; i++) {
		int m = abs(nums[i])-1; // index start from 0
    nums[m] = nums[m]>0 ? -nums[m] : nums[m];
    }
  vector<int> res;
  	  for(int i = 0; i<len; i++) {
  		  if(nums[i] > 0) res.push_back(i+1);
  	  }
  return res;
}

//455
//if child[res] can be content with cookie[i] ,then ++res,++i,else just ++i; finally, res is the number we want
int findContentChildren(vector<int>& g, vector<int>& s) {
	sort(g.begin(),g.end());
	sort(s.begin(),s.end());
	int res = 0;
	for(int i=0;i<(int)s.size()&&res<(int)g.size();++i){
		if(s[i]>=g[res])
			++res;
	 }
	return res;
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

//476
//So ~num produces one's complement i.e flip every bit. But then some of bits have been flipped to
//1( the upper bits) so then I just mask it to use only the first k-bits lower bits, where k is
//the number of bits used in num, so the needed mask is 2^log(num) -1 == ((1 <<(int)log2(num))-1).
int findComplement(int num) {
	return ~num & ((1 <<(int)log2(num))-1);
}
