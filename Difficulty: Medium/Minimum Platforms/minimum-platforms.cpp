class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        int i=0, j=0, curr=0;
        int ans=0;
        while(i<arr.size()){
            if(arr[i]<=dep[j]){
                curr++;
                i++;
            }
            else{
                curr--;
                j++;
            }
            ans=max(ans, curr);
        }
        return ans;
    }
};
