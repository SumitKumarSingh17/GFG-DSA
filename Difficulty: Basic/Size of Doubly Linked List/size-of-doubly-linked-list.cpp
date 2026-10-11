/*
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
};
*/
class Solution {
  public:
    int findSize(Node *head) {
        // Code Here
        int l=0;
        Node* temp=head;
        while(temp!=NULL){
            l++;
            temp=temp->next;
        }
        return l;
    }
};