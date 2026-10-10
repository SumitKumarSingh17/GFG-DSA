/* Strucutre of a link list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        // code Here
        Node* slow=head;
        Node* fast=head;
        if(head==NULL) return new Node(x);
        if(head->next == NULL){
            head->next = new Node(x);
            head->next->next = NULL;
            return head;
        }
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node* newNode=new Node(x);
        newNode->next=slow->next;
        slow->next=newNode;
        return head;
    }
};