/* Structure of a Linked List Node
class Node
{
    int data;
    Node next;
    Node(int d) {
       data = d;
       next = nullptr;
    }
};*/
class Solution {
  public:
    Node* sortLL(Node* head) {
        // code here
        vector<int> v;
        Node* temp=head;
        while(temp!=NULL){
            v.push_back(temp->data);
            temp=temp->next;
        }
        sort(v.begin(), v.end());
        temp=head;
        for(int i=0; i<v.size(); i++){
            temp->data=v[i];
            temp=temp->next;
        }
        return head;
    }
};