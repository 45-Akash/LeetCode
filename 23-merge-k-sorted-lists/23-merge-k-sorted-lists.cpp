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
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        vector<int>ds;
        ListNode *res=NULL;
        ListNode *lastNode;
        
        for(auto it:lists)
        {
            ListNode *head=it;
            ListNode *temp=head;
            
            while(temp!=NULL)
            {
                ds.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(ds.begin(), ds.end());
        
        for(int i=0; i<ds.size(); i++)
        {
            ListNode *newNode =new ListNode(ds[i]);
            
            if(res==NULL)
            {
                res = newNode;
                lastNode = res;
            }
            else
            {
                lastNode->next=newNode;
                lastNode = newNode;
            }
        }
    return res;
        
    }
};