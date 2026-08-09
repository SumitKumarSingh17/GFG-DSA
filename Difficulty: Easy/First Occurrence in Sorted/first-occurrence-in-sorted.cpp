class Solution {
  public:
    int firstSearch(vector<int> &arr, int k) {
        int f = 0;
        int l = arr.size() - 1;
        int ans = -1;
        while (f <= l) {
            int mid = f + (l - f) / 2;
            if (arr[mid] == k) {
                ans = mid;
                l = mid - 1;
            }
            else if (arr[mid] < k) {
                f = mid + 1;
            }
            else {
                l = mid - 1;
            }
        }
        return ans;
    }
};

