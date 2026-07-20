class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        vector<int> ans;
        int min=arr[0];
        int max=arr[0];
        for(int i=0; i<arr.size(); i++){
            if(min<arr[i]) min=arr[i];
            if(max>arr[i]) max=arr[i];
            
        }
        ans.push_back(max);
        ans.push_back(min);
        return ans;
    }
};