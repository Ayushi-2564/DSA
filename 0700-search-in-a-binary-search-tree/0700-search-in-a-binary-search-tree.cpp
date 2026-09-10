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
class Solution {
public:
    bool fun(TreeNode* root, int val, TreeNode*& ans){
        if(root==NULL)return false;
    
        if(root->val==val){ans=root;return true;}
        if(fun(root->left,val, ans)){ return true;}
        if(fun(root->right,val,ans)){ return true;}
      
        return false;
          
        
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans=NULL;
      fun(root, val, ans);
      return ans;
      
    }
};