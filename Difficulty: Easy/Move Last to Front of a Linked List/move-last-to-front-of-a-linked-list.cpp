/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

*/
class Solution {
  public:
    Node *moveToFront(Node *head) {
        // code here
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        head=temp;
        Node* temp1=head;
        while(temp1->next!=temp){
            temp1=temp1->next;
        }
        temp1->next=NULL;
        return head;
    }
};