# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    count = 0
    def goodNodes(self, root: TreeNode) -> int:
        self.solve(root,root.val)
        return self.count
        
    def solve(self,root,Max):
        if root.val >= Max:
            self.count +=  1
        if root.left:
            Maxi = max(root.left.val,Max)
            self.solve(root.left,Maxi)
        if root.right:
            Maxii = max(root.right.val,Max)
            self.solve(root.right,Maxii)
        return 
        