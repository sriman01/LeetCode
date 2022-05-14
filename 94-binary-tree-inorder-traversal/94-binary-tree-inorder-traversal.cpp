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

vector<int> v;

void Inorder(TreeNode* root)
{
    if(root != NULL)
    {
        Inorder(root->left);
        v.push_back(root->val);
        Inorder(root->right);
    }
}
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        v.clear();
        
        Inorder(root);
        return v;
           
    }
};