/* Structure of doubly linked list Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};*/
class Solution {
  public:
    vector<vector<int>> displayList(Node *head) {
        // code here
        vector<int> forw, back;
        Node* temp=head;
        while(temp!=NULL){
            forw.push_back(temp->data);
            temp=temp->next;
        }
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        while(temp!=NULL){
            back.push_back(temp->data);
            temp=temp->prev;
        }
        return {forw, back};
    }
};