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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        struct ListNode* L1=l1;
        struct ListNode* L2=l2;
        struct ListNode *new_node;
        struct ListNode *result = NULL;
        struct ListNode *LastNode;
        vector<int>v1;
        vector<int>v2;
        vector<int>ans;
        
        while(L1)
        {
            v1.push_back(L1->val);
            L1 = L1->next;
        }
        while(L2)
        {
            v2.push_back(L2->val);
            L2 = L2->next;
        }
        reverse(v1.begin(),v1.end());
        reverse(v2.begin(),v2.end());
        int i=0;
        int j=0;
        
        int ie = v1.size();
        int je = v2.size();
        int carry=0;
        int sum;
        
        
        while(i<ie || j<je || carry)
        {
            sum=0;
            if(i < ie)
            {
                sum += v1[i];
                i++;
            }
            
            if(j < je)
            {
                sum += v2[j];
                j++;
            }
            
            sum += carry;
            carry = sum/10;
            ans.push_back(sum%10);
   
        }
        
        reverse(ans.begin(), ans.end());
        for(int i=0; i<ans.size(); i++)
        {
            new_node = new ListNode(ans[i]);
            if(result == NULL)
            {
                result = new_node;
                LastNode = result;
            }
            else
            {
                LastNode->next = new_node;
                LastNode = new_node;
            }
        }
    return result;    
    }
};