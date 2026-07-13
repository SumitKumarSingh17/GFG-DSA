class Solution {
  public:
    void reverseArray(vector<int>& arr, int start, int end) {
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        if (n == 0) return;
        d = d % n;
        if (d == 0) return;
        reverseArray(arr, 0, d - 1);
        reverseArray(arr, d, n - 1);
        reverseArray(arr, 0, n - 1);
    }
};