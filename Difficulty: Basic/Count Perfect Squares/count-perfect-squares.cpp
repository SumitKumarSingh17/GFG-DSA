class Solution {
  public:
    int countSquares(int n) {
        // code here
        int count = 0;
        int i = 1;

        while (i * i < n) {
            count++;
            i++;
        }
        return count;
        
    }
};