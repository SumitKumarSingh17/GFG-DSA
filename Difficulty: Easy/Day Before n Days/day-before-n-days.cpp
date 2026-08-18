class Solution {
  public:
    int nthDay(int d, int n) {
        // code here
        n = n % 7;
        int ans = (d - n + 7) % 7;
        return ans;
    }
};