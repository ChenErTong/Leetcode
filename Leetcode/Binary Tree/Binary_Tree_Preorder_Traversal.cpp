#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> res, t;
		if (root == NULL) return res;
		res.push_back(root->val);
		t = preorderTraversal(root->left);
		res.insert(res.end(), t.begin(), t.end());
		t = preorderTraversal(root->right);
		res.insert(res.end(), t.begin(), t.end());
		return res;
	}
};