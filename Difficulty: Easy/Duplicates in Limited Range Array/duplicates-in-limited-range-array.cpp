class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> freq(n+1,0);
        for(int i=0; i<n; i++){
            freq[arr[i]]++;
        }
        vector<int> ans;
        for(int i=1; i<=n; i++){
            if(freq[i]>=2) ans.push_back(i);
        }
        return ans;
    }
};