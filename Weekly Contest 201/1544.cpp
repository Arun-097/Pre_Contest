class Solution {
public:
    string makeGood(string s) {
      int i=0;
        while(i+1<s.size())
        {  
          if(i<0)
            i++;
          if(s[i]-'a'==s[i+1]-'A' || s[i]-'A'==s[i+1]-'a')
          {  s.erase(i,2);
            i--;}
          else
            i++;
        }
      return s;
    }
};
