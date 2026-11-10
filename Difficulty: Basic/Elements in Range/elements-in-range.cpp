class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i=start; i<=end; i++){
            bool found=false;
            for(int j=0; j<n; j++){
                if(arr[j]==i){
                    found=true;
                    break;
                }
            }
            if(found==false) return false;
        }
        return true;
    }
};
