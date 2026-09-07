class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        vector<int> ans;
        unordered_set<int> seen;
        for (int x:arr) {
            if(seen.find(x)==seen.end()){
                ans.push_back(x);
                seen.insert(x);
            }
        }
        return ans;
    }
};