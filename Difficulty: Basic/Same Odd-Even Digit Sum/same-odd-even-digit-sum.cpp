class Solution {
  public:
    bool checkDigitSums(string s) {
        // code here
        int n=s.size();
        int sumOdd=0;
        int sumEven=0;
        for(int i=0; i<n; i++){
            if(i%2==0) sumEven+=s[i]-'0';
            else sumOdd+=s[i]-'0';
        }
        return sumOdd==sumEven;
    }
};