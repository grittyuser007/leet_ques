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
    ListNode* oddEvenList(ListNode* head) {
    if(!head || head->next==NULL){return head;}
    ListNode *evh=head->next;
    ListNode *odm=head;
    ListNode *evm=head->next;
    while(odm->next && odm->next->next && evm!=NULL )
    {
    odm->next=odm->next->next;
     odm=odm->next;
      
    evm->next=evm->next->next;
    evm=odm->next;

    }
    odm->next=evh;
  
    return head;

    }
};