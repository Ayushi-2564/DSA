/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 #include <algorithm>
class Solution {
public:
    bool fun(TreeNode* root, int k,vector<int>& mp){
       
        if(root==NULL)return false;
        if(count(mp.begin(), mp.end(),root->val))return true;
         mp.push_back(k - root->val);
        return fun(root->left, k, mp) || fun(root->right, k, mp);
       
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>mp;
      return  fun(root, k,mp);

    }
};