class Solution {
public:
    int minOperations(int n) {
      int m=n/2,ans=n*m-m*m;
      return ans;
    }
};
