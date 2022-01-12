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
    TreeNode* insertIntoBST(TreeNode* root, int val)
    {
        if(root==NULL)
        {
            TreeNode *temp =new TreeNode();
            temp->val=val;
            return temp;
        }
        
        TreeNode *iter = root;
        while(true)
        {
            if(iter->val <= val)
            {
                if(iter->right != NULL)     iter=iter->right;
                else
                {
                    TreeNode *new_node = new TreeNode();
                    new_node->val = val;
                    iter->right = new_node;
                    break;
                }
            }
            else
            {
                if(iter->left != NULL)    iter=iter->left;
                else
                {
                    TreeNode *new_node = new TreeNode();
                    new_node->val = val;
                    iter->left = new_node;
                    break;
                }
            }
        }
    return root;
    }
};