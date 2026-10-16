/* Structure of a linked list node
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
    int count(Node* head, int key) {
        int cnt=0;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==key) cnt++;
            temp=temp->next;
        }
        return cnt;
    }
};