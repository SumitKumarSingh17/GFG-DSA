class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int cnt=0;
        for(int i=0;i<n;i++){
            int curr=arr[i];
            int j=0,k=n-1;
            int need=target-curr;
            while(j<k){
                if(j==i){
                    j++;
                    continue;
                }
                if(k==i){
                    k--;
                    continue;
                }
                int tmp=arr[j]+arr[k];
                if(tmp==need){
                    cnt++;
                    j++;
                    k--;
                }
                else if(tmp>need){
                    k--;
                }
                else j++;
            }
        }
        return cnt>0;

    }
};