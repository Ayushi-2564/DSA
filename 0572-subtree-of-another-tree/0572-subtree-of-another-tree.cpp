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
    bool  fun(TreeNode* root, TreeNode* subRoot){
        if(root==NULL && subRoot==NULL)return true;
        if(root==NULL || subRoot==NULL)return false;
        if(root->val !=subRoot->val)return false;
        int r1= fun(root->left, subRoot->left);
        int r2= fun(root->right, subRoot->right);
        if(r1&&r2)return true;
        return false;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL)return false;
        if(fun(root, subRoot) )return true;
      return  isSubtree(root->left,subRoot)||
        isSubtree(root->right,subRoot);
     
    }
};