class Solution {
  public:
    int countWords(string &s) {
        // code here
        int cnt=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]>='a' && s[i]<='z'){
                if(i==0 || s[i-1]==' ' || s[i-1]=='\t' || s[i-1]=='\n') cnt++;
            }
        }
        return cnt;
    }
};