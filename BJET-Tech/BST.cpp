/*
	@copyright-zahangir || BJetTech Second Step Selection-> Contest
	/*********************************************
	Problem::::::1::::::::::::::
	<<<Minimum Distance Between BST Nodes>>>
	------------------------------------------
	Given the `root` of a Binary Search Tree(BST), return the minimum difference between the values of any two different nodes in the tree.
	**********************************************/
*/




#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x),
left(NULL), right(NULL) {}
};

class Solution {
	public:
		int minDifference(TreeNode* root) {
			int min_diff = INT_MAX;
			TreeNode* prev_node = nullptr;
			inOrderTraversal(root, prev_node, min_diff);

			return min_diff;
		}
	private:
		void inOrderTraversal(TreeNode* node, TreeNode*& prev_node , int& min_diff) {
			if(node == nullptr) {
				return;
			}

			inOrderTraversal(node->left, prev_node, min_diff);

			if(prev_node != nullptr) {
				min_diff = min(min_diff, node->val - prev_node->val);
			}
			prev_node = node;

			inOrderTraversal(node->right, prev_node, min_diff);
		}
};


int main() {
	TreeNode* root = new TreeNode(4);
	root->left = new TreeNode(2);
	root->right = new TreeNode(6);
	root->left->left = new TreeNode(1);
	root->left->right = new TreeNode(3);

	Solution solution;
	int minDiff = solution.minDifference(root);

	cout << "The minimum distance between two nodes in the Tree is: " << minDiff << endl;

	return 0;
}
