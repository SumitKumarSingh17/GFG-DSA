class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        set<int> st;
        for (int x : a) st.insert(x);
        for (int x : b) st.insert(x);
        vector<int> arr;
        for (int x : st) arr.push_back(x);
        return arr;
        
    }
};