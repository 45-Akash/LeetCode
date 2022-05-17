/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    TreeNode *ans;
    void Tnode(TreeNode* root, TreeNode* target)
    {
        if(root!=NULL)
        {
           
           if(root->val==target->val)      
            {
                ans = root;
                return;
            }
            Tnode(root->left, target);
            Tnode(root->right, target);
        }
  
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target)
    {
        Tnode(cloned, target);
        return ans;
    }
};