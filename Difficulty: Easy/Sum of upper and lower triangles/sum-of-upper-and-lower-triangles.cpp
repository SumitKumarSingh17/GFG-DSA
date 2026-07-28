class Solution {
  public:
    vector<int> sumTriangles(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int us=0;
        int ls=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j || i<j) us+=mat[i][j];
                if(i==j || i>j) ls+=mat[i][j];
            }
        }
        return {us,ls};
    }
};
