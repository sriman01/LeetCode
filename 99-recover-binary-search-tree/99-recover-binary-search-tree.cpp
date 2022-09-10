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
private:
    TreeNode* first, *prev, *last;
    
public:
    void recoverTree(TreeNode* root) {
        prev = new TreeNode(INT_MIN);
        inorder(root);
        swap(first->val, last->val);
    }
    
    void inorder(TreeNode* root){
        if(root == NULL) return;
        
        inorder(root->left);
        
        if(first == NULL && root->val < prev->val)
            first = prev;
        if(first != NULL && root->val < prev->val)
            last = root;
            
        prev = root;
            
        inorder(root->right);
    }
};