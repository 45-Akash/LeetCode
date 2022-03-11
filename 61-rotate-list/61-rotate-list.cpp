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
    ListNode* rotateRight(ListNode* head, int k)
    {
        if(head==NULL || head->next==NULL || k==0) return head;
        
        int count=1;
        ListNode *current = head;
        
        while(current->next && ++count)  current = current->next;
        
        current->next = head;
        k = k%count;
        k = count - k;
        
        while(k--)                       current = current->next;
        
        head = current->next;
        current->next = NULL;
        
        return head;
    }
};