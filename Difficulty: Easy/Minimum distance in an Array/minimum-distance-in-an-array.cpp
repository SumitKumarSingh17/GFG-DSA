class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        // code here
        
        int ans=INT_MAX;
        int ls=-1;
        int n= arr.size();
        for(int i=0; i<n; i++){
            if(arr[i]==x || arr[i]==y){
                if(ls!=-1 && arr[i]!=arr[ls]){
                    ans=min(ans,abs(i-ls));
                }
                ls=i;
            }
            
        }
        
        return (ans == INT_MAX) ? -1 : ans;
    }
};