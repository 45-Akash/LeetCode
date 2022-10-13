/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node)
    {
        /* ALGORITHM :-
        step 1 :  Given the access to the node which has to be deleted
        step 2 :  Swap the value of given node and its next node
        step 3 :  now join node by leaving one node
                  (whos value to be deleted) to next node
        Take constant Time
        */
        
        swap(node->val, node->next->val);
        ListNode* temp = node->next;
        node->next = temp->next;
        delete temp;
        
    }
};