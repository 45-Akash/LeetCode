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
        ListNode *temp=head;
        ListNode *new_node;
        map<int,int>mp;
        
        while(temp != NULL)
        {
            mp[temp->val]++;
            temp=temp->next;
        }
        
        head=NULL;
        ListNode *lastNode;
        for(auto it:mp)
        {
            if(it.second==1)
            {
                new_node = new ListNode();
                new_node->val = it.first;
                new_node->next=NULL;
                
                if(head==NULL)        head = new_node;
                else                  lastNode->next = new_node;
                
                lastNode = new_node;
            
            }
        }
        
    return head;
    }
};