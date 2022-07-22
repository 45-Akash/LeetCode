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
    ListNode* partition(ListNode* head, int x)
    {
        vector<int>vec;
        ListNode* temp = head;
        ListNode* ans = NULL;
        ListNode* nextNode=NULL;
        
        while(temp)
        {
            if(temp->val < x)
            {
                ListNode* newNode = new ListNode();
                newNode -> val = temp->val;
                newNode->next = NULL;
                
                if(ans==NULL)
                {
                    ans=newNode;
                    nextNode=ans;
                }
                else
                {
                    nextNode->next = newNode;
                    nextNode = newNode;
                }
            }
            else
            {
                vec.push_back(temp->val);
            }
            
            temp = temp->next;
        }
        
        for(int i=0; i<vec.size(); i++)
        {
            ListNode* newNode = new ListNode();
            newNode->val = vec[i];
            newNode->next = NULL;
                
                if(ans==NULL)
                {
                    ans=newNode;
                    nextNode=ans;
                }
                else
                {
                    nextNode->next = newNode;
                    nextNode = newNode;
                }
            
        }
    return ans;
    }
};