class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        sort(arr.begin(), arr.end());
        int i=0, j=arr.size()-1;
        int cnt=0;
        while(i<j){
            if(arr[i]+arr[j]<target){
                cnt+=j-i;
                i++;
            }
            else j--;
        }
        return cnt;
    }
};
