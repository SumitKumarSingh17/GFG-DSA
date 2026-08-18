class Solution {
  public:
    void checkString(string& s) {
        int v = 0;
        int c = 0;

        // code here
        for(char ch:s){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') v++;
            else c++;
        }
        if(v==c) cout<<"Same"<<endl;
        else if(v>c) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
};