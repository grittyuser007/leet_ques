/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
     ListNode* fast=head;
        ListNode* slow=head;
        if(head==NULL || head->next==NULL){return  0;}
        
        while(true)
        {   
            
            if(fast->next==NULL)
            {
             return false;
            }

            else
            {
                fast=fast->next;
                if(fast->next)
                {   if(fast==slow){return true;}
                    fast=fast->next;
                }
                else
                {
                    return false;
                }
            }
             slow=slow->next;
        }   
    }
};