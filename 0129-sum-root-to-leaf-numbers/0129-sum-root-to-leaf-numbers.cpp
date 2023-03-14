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
    
    void helper(TreeNode* node, vector<long long>&ds, long long num)
    {
        if(node!=NULL)
        {
            num = num*10+node->val;
            
            if(node->left==NULL && node->right==NULL)
            {
                ds.push_back(num);
                return;
            }
            
            helper(node->left, ds, num);
            helper(node->right, ds, num);
        }
    }
    int sumNumbers(TreeNode* root)
    {
        vector<long long>ds;
        long long num=0;
        helper(root, ds, num);
        long long ans = 0;
        for(auto it:ds)
        {
            ans += it;
        }
        return ans;
    }
};