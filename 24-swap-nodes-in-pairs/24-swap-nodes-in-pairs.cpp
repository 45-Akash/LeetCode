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
    ListNode* swapPairs(ListNode* head)
    {
        if(head == NULL || head->next == NULL)  return head;
        ListNode* slow = head;    
        ListNode* fast = head->next;
        
        while(fast != NULL)
        {
            int temp = slow->val;
            slow->val = fast->val;
            fast->val = temp;
            
            slow = fast->next;
            if(slow == NULL)     break;
            fast = slow->next;
        }
        
        return head;
    }
};