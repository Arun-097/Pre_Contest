class Solution {
public:
    string revin(string s)
    {
      string str="";
      for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='1')
          str.push_back('0');
        else
          str.push_back('1');
      }
      return str;
    }
    string solve(int n)
    {
      if(n==1)
        return "0";
      string s=solve(n-1);
      return s+'1'+revin(s);
      
    }
    char findKthBit(int n, int k) {
        string s=solve(n);
      return s[k-1];
    }
};
