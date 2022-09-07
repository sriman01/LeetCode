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
    void inorder(TreeNode* root, vector<int> &vec){
        if(root == NULL)
            return;
        stack<TreeNode*> st;

        while(true){
            if(root != NULL){
                st.push(root);
                root = root->left; 
            }
            else{
                if(st.empty()) break;
                root = st.top();
                vec.push_back(root->val);
                st.pop();
                root = root->right;
            }
                
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> vec;
        
        inorder(root, vec);
        
        return vec;
        
    }
};