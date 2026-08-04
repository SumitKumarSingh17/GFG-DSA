class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        map<int, int> mpp;
        int sum = 0;
        int maxlen = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            // If prefix sum itself equals k
            if (sum == k)
                maxlen = max(maxlen, i + 1);

            int rem = sum - k;

            // If (sum-k) exists, update maximum length
            if (mpp.find(rem) != mpp.end()) {
                int len = i - mpp[rem];
                maxlen = max(maxlen, len);
            }

            // Store first occurrence of prefix sum
            if (mpp.find(sum) == mpp.end()) {
                mpp[sum] = i;
            }
        }

        return maxlen;
    }
};