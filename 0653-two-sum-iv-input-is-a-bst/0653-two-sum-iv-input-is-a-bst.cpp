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
 #include <unordered_set>
class Solution {
public:
    bool fun(TreeNode* root, int k,unordered_set<int>& mp){
       
        if(root==NULL)return false;
        if(mp.count(k-root->val))return true;
         mp.insert(root->val);
        return fun(root->left, k, mp) || fun(root->right, k, mp);
       
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int>mp;
      return  fun(root, k,mp);

    }
};