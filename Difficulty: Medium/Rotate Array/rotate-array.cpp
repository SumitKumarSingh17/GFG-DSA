class Solution {
  public:
    void rev(vector <int> &arr, int i, int j){
        while(i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        d=d%n;
        rev(arr, 0, d-1);
        rev(arr, d, n-1);
        rev(arr, 0, n-1);
    }
};