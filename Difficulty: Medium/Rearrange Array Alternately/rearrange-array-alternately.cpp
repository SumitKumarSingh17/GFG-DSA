class Solution {
  public:
    void rearrange(vector<int>& arr) {
        // Your code here
        sort(arr.begin(), arr.end());
        int n=arr.size();
        vector<int> ans;
        for(int i=0; i<(n/2)+1; i++){
            ans.push_back(arr[n-i-1]);
            ans.push_back(arr[i]);
        }
        for(int i=0; i<n; i++){
            arr[i]=ans[i];
        }
    }
};