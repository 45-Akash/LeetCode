/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head)
    {
        /* ALGORITHMS :-(fast/slow pointer technique)
            step 1 :- initialize fast and slow pointers by head
            step 2 :- increment slow by one node each time
            step 3 :- increament fast by two nodes each time
            step 4 :- if the fast pointer reaches to end of list/NULL
            step 5 :- slow will be at middle 
                      so return slow
         */
            
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL && fast->next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            
        }
        
       return slow; 
     
    }
};