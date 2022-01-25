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
    ListNode* reverseBetween(ListNode* head, int left, int right)
    {
        ListNode *temp=head;
        ListNode *start;
        ListNode *end;
        
        vector<int>interval;
        int l=left-1;
        int r=right+1;
        left--;
        right--;
        while(left--)
        {
            temp=temp->next;
        }
        start=temp;
        ListNode *temp1=head;
        while(right--)
        {
            temp1=temp1->next;
        }
        end=temp1;
       
        ListNode *it=start;
        while(it!=end->next)
        {
            interval.push_back(it->val);
            it=it->next;
        }
        reverse(interval.begin(), interval.end());
        cout<<interval.size()<<endl;
        for(auto it:interval)     cout<<it<<" ";
        ListNode *result = NULL;
        ListNode *newNode;
        ListNode *lastNode;
        it = head;
        temp=head;
        while(l--)
        {
            newNode = new ListNode();
            newNode->val=it->val;
            newNode->next=NULL;
            if(result==NULL)
            {
                result=newNode;
                lastNode = result;
            }
            else
            {
                lastNode->next=newNode;
                lastNode=newNode;
            }
            it=it->next;
        }
        int i=0;
        while(it!=end->next)
        {
            newNode = new ListNode();
            newNode->val=interval[i++];
            newNode->next=NULL;
            if(result==NULL)
            {
                result=newNode;
                lastNode = result;
            }
            else
            {
                lastNode->next=newNode;
                lastNode=newNode;
            }
            it=it->next;
        }
        while(it!=NULL)
        {
           newNode = new ListNode();
            newNode->val=it->val;
            newNode->next=NULL;
            if(result==NULL)
            {
                result=newNode;
                lastNode = result;
            }
            else
            {
                lastNode->next=newNode;
                lastNode=newNode;
            }
            it=it->next; 
        }
        
    return result;
    }
};