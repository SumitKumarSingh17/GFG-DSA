class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        int freq[26]={0};
        int n=s.size();
        for(char ch:s){
            freq[ch-'a']++;
        }
        int maxi=0;
        char ch='a';
        for(int i=0; i<26; i++){
            if(freq[i]>maxi){
                maxi=freq[i];
                ch=i+'a';
            }
        }
        return ch;
    }
};