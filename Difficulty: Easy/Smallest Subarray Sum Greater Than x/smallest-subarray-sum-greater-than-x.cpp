class Solution {
  public:
    int smallestSubWithSum(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
                int i = 0, sum = 0;
                int mini = INT_MAX;

                for(int j = 0; j < n; j++) {
                    sum += arr[j];

                    while(sum > x) {
                        mini = min(mini, j - i + 1);
                        sum -= arr[i];
                        i++;
                    }
                }

                return mini == INT_MAX ? 0 : mini;
    }
};