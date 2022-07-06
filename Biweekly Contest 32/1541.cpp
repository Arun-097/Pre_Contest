class Solution {
public:
    int minInsertions(string s) {
        stack<char> st;
      int ans=0,n=s.size();
      for(int i=0;i<n;i++)
      {
        if(s[i]=='(')
          st.push('(');
        if(s[i]==')')
        {
          if(i+1 <n && s[i+1]==')')
          {
            if(st.size()>0)
              st.pop();
            else
              ans++;
            i++;
          }
          else
          {  ans++;
            if(st.size()>0)
              st.pop();
            else
              ans++;
          }
        }
      }
      ans+=st.size()*2;
      return ans;
    }
};
