/* Structure of a link list node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* headRef) {
        // code here
        Node* temp=headRef;
        while(temp->next!=NULL){
            if(temp->data==temp->next->data){
                temp->next=temp->next->next;
                if(temp->next!=NULL) temp->next->prev=temp;
            }
            else temp=temp->next;
        }
        return headRef;
    }
};