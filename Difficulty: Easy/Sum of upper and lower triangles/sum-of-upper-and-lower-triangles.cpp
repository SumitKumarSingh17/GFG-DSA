class Solution {
  public:
    vector<int> sumTriangles(vector<vector<int>>& mat) {
        // code here
        int us=0,ls=0;
        int n=mat.size();
        int i=0,j=0;
        while(i<n){
            int k=j;
            while(k<n){
                us+=mat[i][k];
                k++;
            }
            j++;
            i++;
        }
        i=0,j=0;
        while(i<n){
            int k=0;
            while(k<=j){
                ls+=mat[i][k];
                k++;
            }
            j++;
            i++;
        }
        return {us,ls};
    }
};
