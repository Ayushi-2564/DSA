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
//    bool invertTree(TreeNode* root2){
//     if(root2==NULL)return;
//     swap(root2->left, root2->right);
//     invertTree(root2->left);
//     invertTree(roo2->right);
//    }
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL&& root2==NULL)return true;
        if(root1==NULL|| root2==NULL)return false;
        if(root1->val==root2->val){
        bool with_flip   = (flipEquiv(root1->left, root2->left)&& flipEquiv(root1->right,root2->right));
        bool without_flip= (flipEquiv(root1->right,root2->left) && flipEquiv(root1->left,root2->right));
        return with_flip||without_flip;
        }
  
      else return false;
    }
};