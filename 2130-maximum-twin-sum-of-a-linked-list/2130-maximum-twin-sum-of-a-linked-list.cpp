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
    int pairSum(ListNode* head)
    {
        ListNode* temp = head;
        vector<int>v;
        int n=0;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp = temp->next;
            n++;
        }
        
        int sum = 0;
        
        for(int i=0; i<n/2; i++)
        {
            int val = v[i]+v[n-1-i];
            sum = max(sum, val);
        }
    return sum;
            
    }
};