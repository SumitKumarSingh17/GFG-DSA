class Solution {
  public:
    void rev(vector<int> &arr, int i, int j){
            while(i<j){
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }
    void rotateclockwise(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        k=k%n;
        rev(arr, 0, n-1);
        rev(arr, 0, k-1);
        rev(arr, k, n-1);
    }
};
