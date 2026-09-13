class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        int ans=-1e9;
        int cntmx=-1e9;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int curr=arr[i];
            int j=i;
            int cnt=0;
            while(j<n && arr[j]==curr){
                j++;
                cnt++;
            }
            if(cnt==cntmx){
                ans=max(ans,curr);
                cntmx=cnt;
            }
            if(cnt>cntmx){
                ans=curr;
                cntmx=cnt;
            }
            i=j-1;
        }
        return ans;
    }
};