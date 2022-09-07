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
    void postorder(TreeNode* node, vector<int> &res){
        if(node == NULL) return;
        stack<TreeNode*> s1, s2;
        
        s1.push(node);
        
        while(!s1.empty()){
            TreeNode* temp = s1.top();
            s1.pop();
            s2.push(temp);
            
            if(temp->left != NULL)
                s1.push(temp->left);
            if(temp->right != NULL)
                s1.push(temp->right);
            
        }
        
        while(!s2.empty()){
            res.push_back(s2.top()->val);
            s2.pop();
        }
        
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        postorder(root, res);
        
        return res;
        
    }
};