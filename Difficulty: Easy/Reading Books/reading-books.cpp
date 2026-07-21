class Solution {
  public:
    int maxPoint(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        int ans=0;
        for(int i=0; i<arr1.size();i++){
            int p=(k/arr1[i])*arr2[i];
            ans=max(ans,p);
        }
        return ans;
            
        
    }
};