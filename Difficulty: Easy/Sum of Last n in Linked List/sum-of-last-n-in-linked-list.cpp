/* Structure for link list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    int sumofNodes(Node* head, int n) {
        // Code Here
        vector<int> v;
        Node* temp=head;
        while(temp!=NULL){
            v.push_back(temp->data);
            temp=temp->next;
        }
        int st=v.size()-n;
        int sum=0;
        for(int i=st; i<v.size(); i++){
            sum+=v[i];
        }
        return sum;
    }
};