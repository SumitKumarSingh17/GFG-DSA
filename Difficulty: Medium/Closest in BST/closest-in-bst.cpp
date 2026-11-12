/* Structure of a Binary Search Tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    void inorder(Node* root, vector<int>& arr) {
        if(root == NULL) return;
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }
    int minDiff(Node *root, int k) {
        // code here
        vector<int> ans;
        inorder(root, ans);
        int mini=INT_MAX;
        for(int i=0; i<ans.size(); i++){
            mini=min(mini, abs(ans[i]-k));
        }
        return mini;
    }
};
