class Solution {
  public:
    bool isBinary(string& s) {
        // code here
        int n=s.size();
        for(int i=0; i<n; i++){
            if(s[i]!='1' && s[i]!='0'){
                return false;
            }
        }
        return true;
    }
};