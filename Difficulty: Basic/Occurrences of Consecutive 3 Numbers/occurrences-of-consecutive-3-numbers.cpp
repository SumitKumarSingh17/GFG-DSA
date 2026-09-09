class Solution {
  public:
    int specialIntegers(vector<int> &arr) {
        // code here
        unordered_set<int> st(arr.begin(), arr.end());
        int count = 0;
        for (int x : st) {
            if (st.count(x - 1) && st.count(x + 1)) {
                count++;
            }
        }
        return count;
    }
};