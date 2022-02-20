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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* head1=NULL;
        int sum = 0;
        head=head->next;
        ListNode *lastNode;
        while(head!=NULL)
        {
               if(head->val==0)
               {
                   ListNode* temp = new ListNode(sum);
                   if(head1==NULL)     
                   {
                       head1=temp;
                       lastNode=head1;
                   }
                   else                
                   {
                       lastNode->next = temp;
                       lastNode=temp;
                   } 
                   sum = 0;
               }
            sum+=(head->val);
            head=head->next;
        }
        return head1;
    }

};