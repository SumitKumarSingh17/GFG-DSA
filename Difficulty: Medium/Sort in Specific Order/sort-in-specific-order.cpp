class Solution {
  public:
    void sortIt(vector<int>& arr) {
        // code here
        vector<int> odd;
        vector<int> even;
        int n=arr.size();
        for(int i=0; i<n; i++){
            if(arr[i]%2==0) even.push_back(arr[i]);
            else odd.push_back(arr[i]);
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());
        int idx=0;
        for(int i=0; i<odd.size(); i++){
            arr[idx++]=odd[i];
        }
        for(int i=0; i<even.size(); i++){
            arr[idx++]=even[i];
        }
    }
};