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
    int solve(TreeNode* root, vector<int>dp)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        if(root->left==NULL && root->right==NULL)
        {
            if(dp[root->val]!=0)
            {
                dp[root->val]--;
            }
            else
            {
                dp[root->val]++;
            }
            
            int odd  = 0;
            for(int i=0; i<10; i++)
            {
                if(dp[i]==1)  odd++;
                if(odd==2)
                    return 0;
            }
            return 1;
        }

        
        if(dp[root->val]!=0)
        {
            dp[root->val]--;
        }
        else
        {
            dp[root->val]++;
        }
        
        int left = solve(root->left, dp);
        int right = solve(root->right, dp);
        
        return left + right;
    }
    int pseudoPalindromicPaths (TreeNode* root)
    {
        vector<int>dp(10, 0);
        int ans = solve(root, dp);
        return ans;
    }
};