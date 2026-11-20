class Solution {
  public:
    int minFlips(string &s) {
        // code here
        int n=s.size();
        int cnt0=0, cnt1=0;
        for(int i=0; i<n; i++){
            if(i%2==0){
                if(s[i]!='0') cnt0++;
                if(s[i]!='1') cnt1++;
            }
            else{
                if(s[i]!='1') cnt0++;
                if(s[i]!='0') cnt1++;
            }
        }
        return min(cnt0, cnt1);
    }
};