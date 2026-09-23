class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int minh=0, maxar=0, i=0, j=arr.size()-1, ar=0;
        while(i<j){
            minh=min(arr[i], arr[j]);
            int width=j-i;
            ar=minh*width;
            maxar=max(maxar, ar);
            if(arr[i]<arr[j]) i++;
            else j--;
        }
        return maxar;
    }
};