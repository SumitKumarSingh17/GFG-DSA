class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int cnt0=0;
        int cnt1=0;
        int maxi=INT_MIN;
        int temp=arr[0];
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==0){
                cnt0++;
                cnt1=0;
                maxi=max(maxi,cnt0);
            }
            else{
                cnt1++;
                cnt0=0;
                maxi=max(maxi,cnt1);
            }
        }
        return maxi;
    }
};