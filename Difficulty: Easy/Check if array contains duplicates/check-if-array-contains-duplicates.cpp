class Solution {
  public:
    bool checkDuplicates(vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i]==arr[j]) return true;
            }
        }
        return false;
    }
};
