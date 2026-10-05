/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node* curr=slow;
        Node* prev=NULL;
        while(curr!=NULL){
            Node* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        Node* p=head;
        Node* q=prev;
        while(q!=NULL){
            if(p->data!=q->data) return false;
            p=p->next;
            q=q->next;
        }
        return true;
    }
};