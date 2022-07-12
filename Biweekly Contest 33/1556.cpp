class Solution {
public:
    string thousandSeparator(int n) {
        string s=to_string(n);
        int j=s.size();
        while(j>3)
        {
          s=s.substr(0,j-3)+'.'+s.substr(j-3);
         j-=3;
        }
      return s;
    }
}
