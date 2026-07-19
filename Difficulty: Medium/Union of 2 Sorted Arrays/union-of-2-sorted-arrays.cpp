class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector<int> Union;
        int i = 0, j = 0;
        int n=a.size();
        int m=b.size();
        while (i < n && j < m) {
            if (a[i] < b[j]) {
                if (Union.empty() || Union.back() != a[i])
                    Union.push_back(a[i]);
                i++;
            }
            else if (b[j] < a[i]) {
                if (Union.empty() || Union.back() != b[j])
                    Union.push_back(b[j]);
                j++;
            }
            else {
                if (Union.empty() || Union.back() != a[i])
                    Union.push_back(a[i]);
                i++; j++;
            }
        }
        while (i < n) {
            if (Union.empty() || Union.back() != a[i])
                Union.push_back(a[i]);
            i++;
        }
        while (j < m) {
            if (Union.empty() || Union.back() != b[j])
                Union.push_back(b[j]);
            j++;
        }
        return Union;
        
    }
};