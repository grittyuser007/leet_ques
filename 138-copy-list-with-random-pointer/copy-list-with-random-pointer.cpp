/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
private:
void ins(Node* &head,Node * &tail,int d)
{ Node * n=new Node(d);
    if(tail==NULL)
    {
       tail=n;
       head=n;
    }
    else
    {
        tail->next=n;
        tail=n;
    }
}

public:
    Node* copyRandomList(Node* head) {
  Node *orig=head;
  Node *cloneHead=NULL;
  Node *cloneTail=NULL;
  while(orig!=NULL)
  {
    ins(cloneHead,cloneTail,orig->val);
    orig=orig->next;
  }
  orig=head;
  Node *temp=cloneHead;
map<Node*,Node*>mapp;
 while(orig!=NULL && temp!=NULL)
 {
    mapp[orig]=temp;
    orig=orig->next;
    temp=temp->next;
 }
 orig=head;
 temp=cloneHead;
 while(orig!=NULL )
 { 
   temp->random= mapp[orig->random];
   temp=temp->next;
   orig=orig->next;
 }

 return cloneHead;
    }
};