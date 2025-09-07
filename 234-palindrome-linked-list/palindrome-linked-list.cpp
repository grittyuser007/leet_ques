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
        
       vector<int> st;
        if(head==NULL || head->next==NULL){return true;}
      
      while(start!=NULL)
      {
        st.push_back(start->val);
        start=start->next;
      }
      start=head;
      while(start!=NULL)
      {
        if(st.back()==start->val)
        {
            start=start->next;
            st.pop_back();
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