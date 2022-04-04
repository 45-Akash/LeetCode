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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        /* ALGORITHM :-
            step 1:- count the number of nodes present in list O(n)
            step 2:- move slow pointer from head to kth node   O(n)
            step 3:- move fast pointer from head to kth node from                          backward O(n)
            step 4:- swap node values
            step 5:- return head 
        */
        ListNode *temp=head;
        ListNode *slow=head;
        ListNode *fast=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        
        int n=k-1;
        while(n--)
        {
            slow=slow->next;
        }
        
        n=count-k;
        while(n--)
        {
            fast=fast->next;
        }
        
        
        int temp1=slow->val;
        slow->val = fast->val;
        fast->val = temp1;
        
        return head;
            
    }
};