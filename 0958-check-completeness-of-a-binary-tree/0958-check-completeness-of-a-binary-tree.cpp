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
    

    bool isCompleteTree(TreeNode* root)
    {
        queue<TreeNode*>q;
        bool pre = false;
        
        if(root==NULL) return true;
        q.push(root);
        
        
        //Level Order traversal
        while(!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();
            if(node==NULL)  pre=true;
            else
            {
                if(pre==true) return false;
                
                q.push(node->left);
                q.push(node->right);
            }
        }
    return true;
        
    }
};