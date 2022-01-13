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
    void isValid(TreeNode* root, vector<int>&ds)
    {
        if(root!=NULL)
        {
            isValid(root->left, ds);
            ds.push_back(root->val);
            isValid(root->right, ds);
        }
        
    }
    
    bool isValidBST(TreeNode* root)
    {
        vector<int>vec;
        isValid(root,vec);
        
        for(int i=1; i<vec.size(); i++)
        {
            if(vec[i] <= vec[i-1])   return false;
        }
    return true;
        
    }
};