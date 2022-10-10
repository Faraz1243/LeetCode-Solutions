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
    bool isBalanced(TreeNode* root) {
        if(root)
        {
            int diff = abs(height(root->left) - height(root->right));
            if(diff >1){ return false; }

                bool left = true, right = true;
                if(root->left){
                    left = isBalanced(root->left);
                }
                if(root->right){
                    right = isBalanced(root->right);
                }
                return left&&right;
        }
        return true;
    }
    
    int height(TreeNode* node){
        if(!node ){ return 0; }
        
        return max(height(node->left),height(node->right))+1;
    }
};