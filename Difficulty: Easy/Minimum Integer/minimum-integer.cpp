class Solution {
  public:
    int minimumInteger(vector<int>& arr) {
        // code here
        int n=arr.size();
        long long sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        int ans=INT_MAX;
        for(int i=0; i<arr.size(); i++){
            if((long long) n*arr[i]>=sum){
                ans=min(ans,arr[i]);
            }
        }
        return ans;
    }
};
