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
    int getDecimalValue(ListNode* head)
    {
        /* ALGORITHMS :-
            
            (Least efficient)
            Approach 1:-
                step 1:- reverse the linked list
                step 2:- initialize sum=0,power=0
                step 3:- Add the pow(node->val,power) 
                step 4:- increament power, iterate whole list
                step 5:- return sum
            
            (optimized)
            Approach 2:-
                step 1:- find the lenght of list (len)
                         len--
                step 2:- iterate list by adding pow(node->val,len--)
                step 3:- return sum
             
             (most optimal)
            Approach 3:-
                step 1:- initialize sum=0;
                step 2:- for every new node multiply sum by 2
                step 2.1:- add node->val in the sum
                step 3:- increament list
                step 4:- return sum
        */
                
        int sum=0;
        ListNode *temp=head;
        
        while(temp != NULL)
        {
            sum*=2;
            sum+=temp->val;
            temp=temp->next;
        }
        
        return sum;
    }
};