class Solution {
  public:
    int countSubarray(vector<int>& arr) {
        // code here
        int n=arr.size();
        unordered_map<int, int> mp;
        int cnt=0, sum=0;
        mp[0]=1;
        for(int i=0; i<n; i++){
            if(arr[i]==1) sum++;
            else sum--;
            if(mp.find(sum)!=mp.end()){
                cnt+=mp[sum];
            }
            mp[sum]++;
        }
        return cnt;
    }
};