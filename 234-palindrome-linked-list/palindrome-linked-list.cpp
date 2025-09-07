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
    bool isPalindrome(ListNode* head) {
      ListNode *start=head;
        
       stack<int> st;
        if(head==NULL || head->next==NULL){return true;}
      
      while(start!=NULL)
      {
        st.push(start->val);
        start=start->next;
      }
      start=head;
      while(start!=NULL)
      {
        if(st.top()==start->val)
        {
            start=start->next;
            st.pop();
            continue;
        }
        else
        {
            return false;
        }
      }

       
        return true;
    }



};