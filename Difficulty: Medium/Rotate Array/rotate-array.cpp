class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        if(n==0) return;
        d= d%n;
        if(d==0) return;
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            ans[i]=arr[(i+d)%n];
        }
        arr=ans;
    }
};