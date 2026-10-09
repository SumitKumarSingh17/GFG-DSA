/*Structure of the doubly linked list  Node 
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};*/

class Solution {
  public:
    Node* deleteAllOccurOfX(Node* head, int x) {
        // code here
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==x){
                if(temp==head){
                    head=head->next;
                    if(head!=NULL) head->prev=NULL;
                    delete temp;
                    temp=head;
                }
                else{
                    Node* q=temp;
                    temp->prev->next=temp->next;
                    if(temp->next!=NULL) temp->next->prev=temp->prev;
                    temp=temp->next;
                    delete q;
                }
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
};