class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int mx=INT_MIN,n=arr.size();
        vector<int> till_max(n),next_max(n);
        stack<int> s;
      
      for(int i=0;i<n;i++)
      {
        till_max[i]=mx;
        if(i==0)
         till_max[i]=INT_MAX; 
        mx=max(mx,arr[i]);
        while(!s.empty() && arr[s.top()]<arr[n-1-i])
          s.pop();
        if(!s.empty())
          next_max[n-1-i]=s.top();
        else
          next_max[n-1-i]=n;
        s.push(n-1-i);
      }
      // for(int i=0;i<n;i++)
      //   cout<<till_max[i]<<" ";
      for(int i=0;i<n;i++)
      {
        int val=next_max[i]-1-i+(arr[i]>till_max[i]);
        if(val>=k)
          return arr[i];
      }
      return mx;
    }
};
