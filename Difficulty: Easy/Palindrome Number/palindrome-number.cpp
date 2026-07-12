class Solution {
  public:
    bool isPalindrome(int n) {
        // code here.
        int rev = 0;
        int temp = n ;
        while(n){
            int ld = n % 10;
            n = n / 10;
            rev = rev *10 + ld;
        }
        if (temp == rev) return true;
        return false;
    }
};