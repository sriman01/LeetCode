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
    void preorder(TreeNode* root, vector<int> &vec){
       if(root == NULL)
           return;
        
        stack<TreeNode *> st;
        st.push(root);
        
        while(!st.empty()){
            TreeNode* temp = st.top();
            st.pop();
            
            vec.push_back(temp->val);
            
            if(temp->right != NULL)
                st.push(temp->right);
            
            if(temp->left != NULL)
                st.push(temp->left);

        }
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vec;
        preorder(root, vec);
        
        return vec;
    }
};