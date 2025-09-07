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
    ListNode* middleNode(ListNode* head) {
       ListNode* fast=head;
        ListNode* slow=head;
        if(head==NULL || head->next==NULL){return  head;}
        
        while(true)
        {   
           
            if(fast->next==NULL)
            {
             return slow;
            }

            else
            {
                fast=fast->next;
                if(fast->next)
                {
                    fast=fast->next;
                }
                else
                {
                    return slow->next;
                }
            }
             slow=slow->next;
        }
    }
};