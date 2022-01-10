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
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        vector<vector<int>>res;
        if(root == NULL)      return res;
        queue<TreeNode*>Q;
        Q.push(root);
        
        while(!Q.empty())
        {
            int size = Q.size();
            vector<int>level;
            
            for(int i=0; i<size; i++)
            {
                TreeNode *temp = Q.front();
                Q.pop();
                
                if(temp->left != NULL) Q.push(temp->left);
                if(temp->right != NULL) Q.push(temp->right);
                
                level.push_back(temp->val);
            }
        res.push_back(level);
        }
    return res;
    }
};