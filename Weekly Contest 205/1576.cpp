class Solution {
public:
    string modifyString(string s) {
      int n=s.size();
        for(int i=0;i<s.size();i++)
        {
          if(s[i]=='?')
          {  
            char ch='a';
            if(i==0)
            {
              while(s[i+1]==ch)
                ch++;
              s[i]=char(ch);
            }
            else if(i==n-1)
            {
              while(s[i-1]==ch)
                ch++;
              s[i]=char(ch);
            }
            else
            {
              while(s[i+1]==ch || s[i-1]==ch)
                ch++;
              s[i]=char(ch);
            }
          }
        }
      
      return s;
    }
};
