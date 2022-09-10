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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return Construct(preorder, i, INT_MAX);
        
    }
    TreeNode* Construct(vector<int> &preorder, int &i, int bound){
       if(preorder.size() == i || preorder[i] >= bound) return NULL;
        TreeNode* node = new TreeNode(preorder[i++]);
        node->left = Construct(preorder, i, node->val);
        node->right = Construct(preorder, i, bound);
        
        return node;
        
    }
};