class Solution {
  public:
  bool isPalindrome(int n) {
      int original = n;
      int rev = 0;

      while (n > 0) {
          int digit = n % 10;
          rev = rev * 10 + digit;
          n /= 10;
      }

      return original == rev;
  }

    bool isPalinArray(vector<int> &arr) {
        // code here
        for (int num : arr) {
            if (!isPalindrome(num)) {
                return false;
            }
        }
        return true;
    }
};