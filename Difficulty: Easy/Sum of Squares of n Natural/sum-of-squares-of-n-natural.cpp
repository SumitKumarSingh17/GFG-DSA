class Solution {
  public:
    int sumOfSquares(int n) {
        // code here
        int ans=0;
        for(int i=1; i<=n; i++){
            ans+=i*i;
        }
        return ans;
    }
};