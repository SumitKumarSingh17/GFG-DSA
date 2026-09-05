class Solution {
  public:
    int remainder(string &x) {
        // code here
        int rem=0;
        for (char ch:x){
            int digit=ch-'0';
            rem=(rem*10+digit)%11;
        }
        return rem;
    }
};
