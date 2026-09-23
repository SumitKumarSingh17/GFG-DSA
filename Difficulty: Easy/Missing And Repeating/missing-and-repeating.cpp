class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> freq(n+1, 0);
        for(int i=0; i<arr.size(); i++){
            freq[arr[i]]++;
        }
        int missing=-1, duplicate=-1;
        for(int i=1; i<freq.size(); i++){
            if(freq[i]==0) missing=i;
            if(freq[i]== 2) duplicate=i;
        }
        return {duplicate, missing};
    }
};