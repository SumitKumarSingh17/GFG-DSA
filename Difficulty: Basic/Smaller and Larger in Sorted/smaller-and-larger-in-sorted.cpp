class Solution {
  public:
    vector<int> getMoreAndLess(vector<int> &arr, int target) {
        // code here
        int cnts=0;
        int cntl=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]<=target) cnts++;
            if(arr[i]>=target) cntl++;
        }
        return {cnts,cntl};
    }
};