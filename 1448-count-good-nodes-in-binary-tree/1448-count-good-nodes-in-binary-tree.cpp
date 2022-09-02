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
    
    int cnt = 0;
    void dfs(TreeNode* node, int val){
        if(!node) return;
        
        if(node->val >= val){
            val = node->val;
                cnt += 1;
        }
        if(node->left)
            dfs(node->left, val);
            
        if(node->right)
            dfs(node->right,val);
        
        
    }
    int goodNodes(TreeNode* root) {
 
        dfs(root, root->val);
            
        return cnt;
        
    }
};