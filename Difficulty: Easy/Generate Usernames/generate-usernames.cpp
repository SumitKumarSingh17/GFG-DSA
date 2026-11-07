class Solution {
	public:
	vector<string> generateUsernames(vector<string> arr) {
		// code here
		unordered_set<string> used(arr.begin(), arr.end());
		unordered_map<string, int> mp;
		vector<string> ans;
		for (string s:arr){
			if (mp[s]==0){
				ans.push_back(s);
				mp[s]=1;
			}
			else{
				int cnt=mp[s];
				
				while (used.count(s + to_string(cnt))) cnt++;
				string temp=s+to_string(cnt);
				ans.push_back(temp);
				used.insert(temp);
				mp[s]=cnt+1;
			}
		}
		return ans;
	}
};
