class Solution {
  public:
    void arrange(vector<int>& arr) {
        //  code here
        int n=arr.size();
        vector<int> v;
        for(int i=0; i<n; i++){
            v.push_back(arr[arr[i]]);
        }
        for(int i=0; i<n ;i++){
            arr[i]=v[i];
        }
    }
};