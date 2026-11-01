class Solution {
  public:
    int multiply(vector<int> &arr) {
        // code here
        int n=arr.size();
        int lsum=0, rsum=0;
        for(int i=0; i<n/2; i++){
            lsum+=arr[i];
        }
        for(int i=n/2; i<n; i++){
            rsum+=arr[i];
        }
        return lsum*rsum;
    }
};