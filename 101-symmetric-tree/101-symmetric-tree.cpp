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
    void helper_1(TreeNode *root, vector<int>&v)
    {
        if(root == NULL)    
        {
            v.push_back(0);
            return;
        }
        if(root != NULL)
        {
            v.push_back(root->val);
            helper_1(root->left, v);
            helper_1(root->right, v);
        }
    }
    void helper_2(TreeNode *root, vector<int>&v)
    {
        if(root == NULL)    
        {
            v.push_back(0);
            return;
        }
        if(root != NULL)
        {
            v.push_back(root->val);
            helper_2(root->right, v);
            helper_2(root->left, v);
        }
    }
    
    bool isSymmetric(TreeNode* root) 
    {
        if(root->left==NULL && root->right==NULL)    return true;
        if(root->left==NULL || root->right==NULL)    return false;
        
        vector<int>preOrder_1;
        vector<int>preOrder_2;
        TreeNode *temp = root;
        
        helper_1(root,preOrder_1);
        helper_2(temp,preOrder_2);
        
        for(int i=0; i<preOrder_1.size(); i++)
        {
            cout<<preOrder_1[i]<<" "<<preOrder_2[i]<<endl;
            if(preOrder_1[i] != preOrder_2[i])  return false;
        }
        return true;
    }
};