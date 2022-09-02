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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> Cont;
        vector<double> ans;
        
        Cont.push(root);
        
        while(!Cont.empty()){
            double sum = 0;
            int n = Cont.size();
            for(int i = 0; i < n; i ++){    
            TreeNode* node = Cont.front();
            if(node->left) Cont.push(node->left);
            if(node->right) Cont.push(node->right);
            
            sum += node->val;
            Cont.pop();
                
            } 
            ans.push_back(sum/n);
        }
     
        return ans;
    }
};