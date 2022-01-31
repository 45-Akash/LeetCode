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
    
    void Inorder(TreeNode* root, vector<int>&ds, set<int>&st)
    {
        if(root != NULL)
        {
            Inorder(root->left, ds, st);
            if(st.find(root->val)==st.end())
            {
                ds.push_back(root->val);
                st.insert(root->val);
            }
            Inorder(root->right, ds, st);  
        }
    }
    
    int findSecondMinimumValue(TreeNode* root)
    {
        set<int>st;
        vector<int>ds;
        
        Inorder(root,ds,st);
        sort(ds.begin(), ds.end());
        
        if(ds.size()==1)     return -1;
        return ds[1];
    }
};