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
    /* ALGORITHM :-
        step 1 = iterate given list and 
                 store all elements in a vector
        step 2 = sort the vector
        step 3 = store the elements of sorted vector
                 in newly created list
        step 4 = return list
    */
    ListNode* sortList(ListNode* head)
    {
        vector<int>vec;
        ListNode *temp=head;
        
        while(temp!=NULL)
        {
            vec.push_back(temp->val);
            temp=temp->next;
        }
        
        sort(vec.begin(), vec.end());
        //important to make result NULL to run multiple test cases
        ListNode *result=NULL;       
        ListNode *new_node;
        ListNode *last_node;
        
       
        for(int i=0; i<vec.size(); i++)
        {
            
            new_node = new ListNode();
            new_node->val=vec[i];
            new_node->next=NULL;
            
            if(result==NULL)
            {
                result=new_node;
                last_node = result;
            }
            else
            {
                //New concept to reduce TC (derived by own)
                last_node->next = new_node;
                last_node = last_node->next;
            }
        }
        
        return result;
    }
};