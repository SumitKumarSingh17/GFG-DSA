class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        // code here
        int cnte=0, cnto=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]%2==0) cnte++;
            else cnto++;
        }
        return {cnto, cnte};
    }
};