/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        if(head==NULL) return NULL;
        if(x==1){
            Node* temp=head->next;
            return temp;
        }
        Node* temp=head;
        for(int i=1; i<x-1 && temp->next!=NULL; i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};