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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return{};
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
          bool lefttoright=true;
        while(!q.empty()){
          int level=q.size();
            vector<int>temp(level);
            int first=0;
            int last =level-1;
            while(level--){
                TreeNode* t=q.front();
                 q.pop();
                 if(lefttoright==1){
                    temp[first]=t->val;
                    first++;
                 }
                 else{
                    temp[last]=t->val;
                    last--;
                 }
                
                 if(t->left!=NULL){
                    q.push(t->left);
                 }
                 if(t->right!=NULL){
                    q.push(t->right);
                 }
                  
                
            } 
            ans.push_back(temp);
            lefttoright= !lefttoright;
        }
        return ans;
    }
};