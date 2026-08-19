class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int freq = 0;
        int ans = 0;

        // Find candidate
        for (int i = 0; i < arr.size(); i++) {
            if (freq == 0)
                ans = arr[i];

            if (ans == arr[i])
                freq++;
            else
                freq--;
        }

        // Verify candidate
        freq = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == ans)
                freq++;
        }

        if (freq > arr.size() / 2)
            return ans;

        return -1;
    }
};