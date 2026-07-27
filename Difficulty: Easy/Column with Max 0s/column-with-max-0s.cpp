class Solution {
  public:
    int maxZeros(vector<vector<int>> arr) {
        // code here
        int n = arr.size();
        int maxZeros = 0;
        int ans = -1;

        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (arr[j][i] == 0)
                    cnt++;
            }

            if (cnt > maxZeros) {
                maxZeros = cnt;
                ans = i;
            }
        }

        return ans;
    }
};