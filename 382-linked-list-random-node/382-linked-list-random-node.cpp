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
    ListNode *temp;
    
    Solution(ListNode* head)
    {
        temp=head;
        srand(time(NULL));
    }
    
    int getRandom()
    {
        
        int len = 0;
        ListNode *iter = temp;
        while(iter != NULL)
        {
            len++;
            iter = iter->next;
        }
        
        int pos = rand()%len;
        cout<<pos<<" ";
        iter = temp;
        while(pos--)
        {
            iter = iter->next;
        }
    return iter->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */