class Solution {
  public:
    vector<int> exitPoint(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        
        int i=0,j=0;
        int d=0; 
        //0-r,1-d,2-l,3-u
        //Why are we not checking for 1 or 0 before moving pointers?
        while(i>=0&&i<n&&j>=0&&j<m){
            d=(d+mat[i][j])%4;
            if(mat[i][j])mat[i][j]=0;
            if(d==0)j++;
            else if(d==1)i++;
            else if(d==2)j--;
            else i--;
        }
        if(i<0)i++;
        if(i>=n)i--;
        if(j<0)j++;
        if(j>=m)j--;
        return {i,j};


    }
};