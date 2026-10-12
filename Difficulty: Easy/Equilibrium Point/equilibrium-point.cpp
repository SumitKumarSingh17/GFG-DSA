class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int n=arr.size();
        int tsum=0;
        for(int i=0; i<n; i++){
            tsum+=arr[i];
        }
        int rsum=0, lsum=0;
        for(int i=0; i<n; i++){
            rsum=tsum-lsum-arr[i];
            if(rsum==lsum) return i;
            lsum+=arr[i];
        }
        return -1;
    }
};