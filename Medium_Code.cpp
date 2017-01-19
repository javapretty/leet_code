/*
 * Medium_Code.cpp
 *
 *  Created on: 2017年1月10日
 *      Author: zhangyalei
 */

#include "Medium_Code.h"

//388
int lengthLongestPath(string input) {
	int maxi=0,count=0,ln=1;
	bool isFile=false;
	vector<int> level(200);
	level[0]=0;
	for(int i=0,fin=input.size();i<fin;++i){
		//find which level
		while(input[i]=='\t'){
			++ln;++i;
		}
		//read file name
		while(input[i]!='\n'&&i<fin){
			if(input[i]=='.')isFile=true;
			++count;++i;
		}
		//calculate
		if(isFile){
			maxi=max(maxi,level[ln-1]+count);
		}
		else{
			level[ln]=level[ln-1]+count+1;// 1 means '/'
		}
		//reset
		count=0;ln=1;isFile=false;
	}
	return maxi;
}

//433
int minMutation(string start, string end, vector<string>& bank) {
	return 0;
}

//445
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	stack<int> v1, v2;
	ListNode* iter1 = l1;
	ListNode* iter2 = l2;
	while(iter1){
		v1.push(iter1->val);
		iter1 = iter1->next;
	}
	while(iter2){
		v2.push(iter2->val);
		iter2 = iter2->next;
	}

	ListNode* head = new ListNode((v1.top()+v2.top())%10);
	int carry = (v1.top()+v2.top())/10;
	if(!v1.empty())v1.pop();
	if(!v2.empty())v2.pop();
	while( !v1.empty() || !v2.empty() ){
		int tmp = (!v1.empty() ? v1.top() : 0)+(!v2.empty() ? v2.top() : 0)+carry;
		ListNode* n = new ListNode(tmp%10);
		carry = tmp/10;
		if(!v1.empty())v1.pop();
		if(!v2.empty())v2.pop();
		n->next = head;
		head = n;
	}
	if( carry ) {
		ListNode* n = new ListNode(carry);
		n->next = head;
		head = n;
	}
	return head;
}

//450
TreeNode* deleteNode(TreeNode* root, int key) {
	if(root == NULL) return NULL;

	if(root->val == key) {
		if(root->right) {
			TreeNode* p = root->right;
			while(p->left) p = p->left;
			p->left = root->left;
			return root->right;
		}
		else if(root->left)
			return root->left;
		else return NULL;
	}

	if(root->val > key)
		root->left = deleteNode(root->left, key);
	if(root->val < key)
		root->right = deleteNode(root->right, key);

	return root;
}

//457
bool circularArrayLoop(vector<int>& nums) {
	int n=nums.size();
	if(!n) return false;
	int slow=0, fast=(nums[slow]+n)%n;

	while(fast!=slow){
		//if there are different directions
		if(nums[0]*nums[slow]<0 ) return false;

		slow=(slow+nums[slow]+n)%n;
		//if fast points to itself
		if(fast==((fast+nums[fast]+n)%n + nums[(fast+nums[fast]+n)%n] + n)%n) return false;

		fast=((fast+nums[fast]+n)%n + nums[(fast+nums[fast]+n)%n] + n)%n;

	}

	return true;
}

//482
string licenseKeyFormatting(string S, int K) {
	return "";
}
