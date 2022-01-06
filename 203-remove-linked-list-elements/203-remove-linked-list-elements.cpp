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
    ListNode* removeElements(ListNode* head, int val)
    {
        //take an vector store all value from given list 
        // which are not equal to  (val)
        // now create a new_list and add all the elements presents in vector 
        // to new_list one by one
         
        ListNode* temp = head;
        ListNode* new_list=NULL;
        
        
        vector<int>vec;
        while(temp != NULL)
        {
            if(temp->val != val)    
            {
                vec.push_back(temp->val);
            }
            temp=temp->next;
        }
        
        if(vec.size()==0) return new_list;
        
        int i;
        ListNode* node;
        
        for(i=0; i<vec.size(); i++)
        {
            node = new ListNode();
            node->val = vec[i];
            node->next=NULL;
            
            if(new_list == NULL)
            {
                new_list=node;
                
            }
            else
            {
                temp=new_list;
                while( temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next=node;
            }
        }
        
    return new_list;
    }
};