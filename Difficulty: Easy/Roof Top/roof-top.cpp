class Solution {
  public:
    int maxStep(vector<int>& arr) {
        // code here
        int cnt=0; 
        int maxi=0;
        for(int i=0; i<arr.size()-1; i++){
            if(arr[i]<arr[i+1]){
                cnt++;
                maxi=max(maxi,cnt);
            }
            else cnt=0;
        }
        return maxi;
    }
};