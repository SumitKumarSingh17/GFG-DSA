class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int cnt0=0, maxi=0, cnt1=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==1){
                cnt1++;
                cnt0=0;
                maxi=max(maxi,cnt1);
            }
            else{
                cnt0++;
                cnt1=0;
                maxi=max(maxi, cnt0);
            }
        }
        return maxi;
    }
};