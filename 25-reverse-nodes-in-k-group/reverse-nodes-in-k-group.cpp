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
    ListNode* reverseKGroup(ListNode* head, int k) {
      if(head==NULL)
{
    return head;
}  
ListNode* temp=head;
int rem=0;
while(temp!=NULL){
    temp=temp->next;
    rem++;
 }
 if (rem<k)
 {
return head;
 }
    ListNode *prev=NULL;
    ListNode *curr=head;
    ListNode *next=NULL;
    int cnt=0;
    while(curr!=NULL && cnt<k)    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        cnt++;

    }if(next!=NULL){
    head->next=reverseKGroup(next,k);
    }
    return prev;



    }
};