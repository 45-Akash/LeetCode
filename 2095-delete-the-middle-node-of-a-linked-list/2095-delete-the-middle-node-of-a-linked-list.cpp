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
    ListNode* deleteMiddle(ListNode* head)
    {
        ListNode *temp=head;
        int len=0;
        
        while(temp!=NULL)
        {
            len++;
            temp = temp->next;
        }
        
        if(len==1)
        {
            return NULL;
        }
        temp=head;
        len/=2;
        len--;
        while(len>0)
        {
            temp=temp->next;
            len--;
        }
        
        if(temp->next->next==NULL)     temp->next=NULL;
        else
        {
            ListNode *Next = temp->next->next;
            temp->next = Next;
        }
    return head;
    }
};