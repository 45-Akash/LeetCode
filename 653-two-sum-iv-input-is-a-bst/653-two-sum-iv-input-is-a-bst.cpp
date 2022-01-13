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
    void Inorder(TreeNode* root, vector<int>&ds)
    {
        if(root!=NULL)
        {
            Inorder(root->left, ds);
            ds.push_back(root->val);
            Inorder(root->right, ds);
        }
    }
    bool findTarget(TreeNode* root, int k)
    {
        vector<int>vec;
        
        Inorder(root,vec);
        int s=0;
        int e=vec.size()-1;
        
        while(s<e)
        {
            int sum = vec[s]+vec[e];
            if(sum==k)                    return true;
            if(sum > k)                   e--;
            else                          s++;
        }
    return false;
    }
};