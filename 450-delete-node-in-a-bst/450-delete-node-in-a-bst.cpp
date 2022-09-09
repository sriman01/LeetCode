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
    TreeNode* minNode(TreeNode* node){
        while(node && node->right){
            node = node->right;
        }
        return node;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL)
            return NULL;
        
        if(root->val < key)
            root->right = deleteNode(root->right, key);
        else if(root->val > key)
            root->left = deleteNode(root->left, key);
        else{
            if(root->left == NULL)
                return root->right;
            if(root->right == NULL)
                return root->left;
            
            TreeNode* node = minNode(root->left);
            
            root->val = node->val;
            
           root->left = deleteNode(root->left, node->val);
        }
        return root;
        
    }
};