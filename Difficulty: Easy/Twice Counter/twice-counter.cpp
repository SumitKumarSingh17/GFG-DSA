class Solution {
  public:
    int countWords(vector<string> &list) {
        // code here.
        int n=list.size();
        int cnt=0;
        unordered_map<string, int> mp;
        for(int i=0; i<n; i++){
            mp[list[i]]++;
        }
        for(auto i:mp){
            if(i.second==2) cnt++;
        }
        return cnt;
    }
};