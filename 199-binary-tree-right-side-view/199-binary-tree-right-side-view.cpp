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
    vector<int> rightSideView(TreeNode* root)
    {
        vector<int>ans;
        if(root==NULL)    return {};
        queue<TreeNode*>q;
        
        q.push(root);
        while(q.size())
        {
            int size = q.size();
            vector<int>l;
            for(int i=0; i<size; i++)
            {
                TreeNode *temp = q.front();
                q.pop();
                if(temp->left!=NULL)    q.push(temp->left);
                if(temp->right!=NULL)   q.push(temp->right);
                l.push_back(temp->val);
            }
            ans.push_back(l[l.size()-1]);
        }
    return ans;
    }
};