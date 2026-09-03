class Solution {
  public:
    int minIncrements(vector<int>& arr) {
        // Code here
        sort(arr.begin(), arr.end());
        int n=arr.size();
        int ans=0;
        for(int i=1; i<arr.size(); i++){
            if(arr[i]<=arr[i-1]){
                int diff=arr[i-1]-arr[i]+1;
                ans+=diff;
                arr[i]+=diff;
            }
        }
        return ans;
    }
};