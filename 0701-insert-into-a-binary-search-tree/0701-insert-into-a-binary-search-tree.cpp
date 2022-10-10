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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            root = new TreeNode(val);
            return root;
        }
        else if(root->val>val)
        {
            if(root->left==NULL){
                TreeNode* t= new TreeNode(val);
                root->left=t;
                return root;
            }
            else{
                root->left = insertIntoBST(root->left, val);
                return root;
            }
        }
        else if(root->val<val)
        {
            if(root->right==NULL){
                TreeNode* t = new TreeNode(val);
                root->right=t;
                return root;
            }
            else{
                root->right = insertIntoBST(root->right, val);
                return root;
            }
        }
        return NULL;
    }
};