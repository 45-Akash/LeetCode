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
    
    struct ListNode* result = NULL;
    void insert_3(int x)
        {
            //ListNode *new_node;
            ListNode *new_node= new ListNode();
            new_node->val = x;
            ListNode *temp=result;
        
            if(result == NULL)
            {
                result = new_node;
                new_node->next = NULL;
            }
            else
            {
                while(temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = new_node;
                new_node->next = NULL;
            }
        }
    
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
       
        
        while(l1 != NULL && l2 != NULL)
        {
           
            
            if(l1->val < l2->val)
            {
                
               insert_3(l1->val);     
               l1=l1->next; 
                
            }
            else 
            {
                  insert_3(l2->val);
                  l2=l2->next;  
                
            }
            
        }
        
        while(l1 != NULL)
        {
            insert_3(l1->val);
            l1=l1->next;
        }
        
        while(l2 != NULL)
        {
            insert_3(l2->val);
            l2=l2->next;  
            
        }

        return result;
        
    }
};