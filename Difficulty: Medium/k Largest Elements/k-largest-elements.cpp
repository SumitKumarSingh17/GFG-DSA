class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        vector<int> ans;
        int n=arr.size();
        for(int i=n-1; i>=n-k; i--){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};