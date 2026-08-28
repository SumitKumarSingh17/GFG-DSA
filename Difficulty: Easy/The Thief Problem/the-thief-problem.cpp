class Solution {
  public:
    int getMaxVal(vector<int> &arr, int k) {
        // code here
        int sum=0;
        sort(arr.begin(),arr.end(), greater<int>());
        int n=arr.size();
        for(int i=0; i<k; i++){
            sum+=arr[i];
        }
        return sum;
    }
};