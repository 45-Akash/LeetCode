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
    ListNode* deleteDuplicates(ListNode* head)
    {
        if(head == NULL || head->next==NULL)   return head;
        ListNode *ptemp,*temp;
        ptemp=temp=head;
        temp = ptemp->next;

        while(temp != NULL)
        {
           if(temp->val == ptemp->val)
           {
               temp=temp->next;
               if(temp==NULL)
               {
                   ptemp->next = NULL;
                   return head;
               }

               while(temp->val == ptemp->val)
               {
                   temp=temp->next;
                    if(temp==NULL)
                    {
                        ptemp->next = NULL;
                        return head;
                    }
               }

               ptemp->next = temp;
               ptemp=temp;
               temp=temp->next;
           }
           else
           {
               ptemp=temp;
               temp=temp->next;
           }
        }

        return head;
    }
};