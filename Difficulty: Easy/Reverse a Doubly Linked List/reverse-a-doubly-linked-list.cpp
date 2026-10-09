/* Structure of Doubly Linked List Node
class Node {
	public:
	int data;
	Node *next;
	Node *prev;
	
	Node(int val) {
		data = val;
		next = nullptr;
		prev = nullptr;
	}
};

*/
class Solution {
	public:
	Node *reverse(Node *head) {
		// code here
		vector<int> v;
		Node* temp = head;
		while (temp != NULL) {
			v.push_back(temp->data);
			temp = temp->next;
		}
		temp = head;
		for (int i = v.size() - 1; i >= 0; i--) {
			temp->data = v[i];
			temp = temp->next;
		}
		return head;
	}
};
