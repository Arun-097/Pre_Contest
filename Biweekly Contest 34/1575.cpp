class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size(),sum=0;
      for(int i=0;i<n;i++)
        sum+=mat[i][i];
      for(int i=0;i<n;i++)
      {  
        if(i != n-1-i)
        sum+=mat[n-1-i][i];
      }
      return sum;
    }
};
