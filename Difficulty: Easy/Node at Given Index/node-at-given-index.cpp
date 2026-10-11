/* Node Structure
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
    int getNode(Node* head, int k) {
        // code here
        Node* temp=head;
        int i=0;
        while(temp!=NULL){
            i++;
            if(i==k) return temp->data;
            temp=temp->next;
        }
        return -1;
    }
};