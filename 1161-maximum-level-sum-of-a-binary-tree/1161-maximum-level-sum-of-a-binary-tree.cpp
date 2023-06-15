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
    int maxLevelSum(TreeNode* root)
    {
        int max_sum = 0;
        int max_sum_level = 1;
        
        queue<TreeNode*>q;
        q.push(root);
        max_sum = root->val;
        
        int level = 1;
        while(!q.empty())
        {
            int size = q.size();
            int curr_sum = 0;
            
            for(int i=0; i<size; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                
                if(node->left != NULL)  q.push(node->left);
                if(node->right != NULL) q.push(node->right);
                curr_sum += node->val;
            }
            if(curr_sum > max_sum)
            {
                max_sum_level = level;
                max_sum = curr_sum;
            }
            level++;
        }
    return max_sum_level;
    }
};