class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        
        int min=arr[0];
        int max=arr[0];
        for(int i=0; i<arr.size(); i++){
            if(min<arr[i]) min=arr[i];
            if(max>arr[i]) max=arr[i];
            
        }
        
        return {max,min};
    }
};