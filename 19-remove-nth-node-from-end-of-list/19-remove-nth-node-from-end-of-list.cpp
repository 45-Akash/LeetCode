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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        int pos=1;
        ListNode *temp1 = head;
        ListNode *temp = head;
        ListNode *prevNode = head;
        int cnt=1;
        
        if(temp->next == NULL)      //if there is only one node in list
        {
            head = NULL;
        }
        else
        {
            while(temp1 != NULL)       //count the number of nodes in list
            {
                temp1 = temp1->next;
                cnt++;
            }
         
            if(cnt-n == 1)            //for deleting the first node from list
            {
                temp = temp->next;
                head = temp;
            }
            else                  //for deleting the other than first node from list
            {
                while(pos != cnt-n)   //to iterate till target list
                {
                    prevNode = temp;
                    temp = temp->next;
                    pos++;
                }

                if(temp->next == NULL)       //if target node is last node of list
                {
                    prevNode->next = NULL;
                }
                else                //if target node is other than last node of list
                {
                    prevNode->next = temp->next;
                }
            }
           
        }
        
    return head;
        
        
    }
};