/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        if(head == NULL || head->next == NULL)
            return head;
        vector<Node*> v;
        Node* temp = head;

        while(temp != NULL) {
            v.push_back(temp);
            temp = temp->next;
        }
        int n = v.size();
        k = k % n;
        if(k == 0)
            return head;
        v[n - 1]->next = head;
        head = v[k];
        v[k - 1]->next = NULL;
        return head;
    }
};