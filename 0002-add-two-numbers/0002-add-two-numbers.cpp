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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        struct ListNode* L1=l1;
        struct ListNode* L2=l2;
        struct ListNode *new_node;
        struct ListNode *result = NULL;
        struct ListNode *LastNode;
        
        int carry=0;
        int sum;
        
        while(L1 || L2 || carry)
        {
            sum=0;
            if(L1 != NULL)
            {
                sum=sum+L1->val;
                L1 = L1->next;
            }
            
            if(L2 != NULL)
            {
                sum=sum+L2->val;
                L2 = L2->next;
            }
            
            sum += carry;
            carry = sum/10;
            new_node = new ListNode(sum%10);
            if(result == NULL)
            {
                result = new_node;
                LastNode = result;
            }
            else
            {
                LastNode->next = new_node;
                LastNode = new_node;
            }
   
        }
    return result;
        
    }
};