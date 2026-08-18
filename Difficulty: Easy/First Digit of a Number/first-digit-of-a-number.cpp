int firstDigit(int n) {
    // code here
    vector<int> ans;
    while(n){
        int ld=n%10;
        ans.push_back(ld);
        n/=10;
    }
    int m=ans.size();
    return ans[m-1];
}