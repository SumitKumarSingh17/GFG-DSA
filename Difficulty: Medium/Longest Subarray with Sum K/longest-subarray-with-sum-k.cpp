class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int, int> mpp;
        int maxi = 0;
        int sum = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            // If subarray starts from index 0
            if (sum == k) {
                maxi = i + 1;
            }

            // If (sum - k) exists, we found a subarray with sum k
            if (mpp.find(sum - k) != mpp.end()) {
                maxi = max(maxi, i - mpp[sum - k]);
            }

            // Store first occurrence of prefix sum
            if (mpp.find(sum) == mpp.end()) {
                mpp[sum] = i;
            }
        }

        return maxi;
    }
};