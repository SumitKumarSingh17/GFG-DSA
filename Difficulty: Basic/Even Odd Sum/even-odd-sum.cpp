class Solution {
  public:
    vector<int> evenOddSum(vector<int>& arr) {
        // code here
        int oddsum=0, evensum=0;
        for(int i=0; i<arr.size(); i++){
            if(i%2==0) oddsum+=arr[i];
            else evensum+=arr[i];
        }
        return {evensum, oddsum};
    }
};