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
    bool isPalindrome(ListNode* head)
    {
        stack<int>st;
        ListNode* temp = head;
        ListNode* double_stp = head;
       
        
        if(temp->next == NULL)
        {
            return true;
        }
        
        
        int flag=0;
        while(double_stp->next != NULL)
        {
           st.push(temp->val);
           
            temp = temp->next;
            double_stp = double_stp->next;
            double_stp = double_stp->next;
            if(double_stp == NULL) 
            {
                flag =1;
                break;
            }
            
          
        }
        if(flag == 0)
        {
          temp = temp->next;
        }
       
        
        while(temp!=NULL)
        { 
            if(temp->val != st.top())
            {
                return false;
            }
            st.pop();
            temp = temp->next;
        }
        
        if(st.size()==0)  return true;
        return false;
    }
};