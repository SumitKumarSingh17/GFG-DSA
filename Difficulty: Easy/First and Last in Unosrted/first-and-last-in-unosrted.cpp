class Solution {
  public:
    vector<int> findIndex(vector<int>& arr, int key) {
        // code here
        int n=arr.size();
        int f=-1, l=-1;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==key){
                if(f==-1) f=i;
                l=i;
            }
        }
        return {f,l};
    }
};