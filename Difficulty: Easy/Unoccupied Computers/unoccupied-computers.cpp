class Solution {
  public:
    int solve(int n, string s) {
        // code here
        int computers = 0;
        int rejected = 0;
        vector<int> status(26, 0);
        // 0 = not arrived
        // 1 = using computer
        // 2 = rejected
        for (char ch : s) {
            int id = ch - 'A';
            if (status[id] == 0) {
                if (computers < n) {
                    status[id] = 1;
                    computers++;
                } 
                else {
                    status[id] = 2;
                    rejected++;
                }
            }
            else {
                if (status[id] == 1) {
                    computers--;
                }
            }
        }
        return rejected;
    }
};
