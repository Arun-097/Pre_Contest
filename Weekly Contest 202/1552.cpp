class Solution {
public:
    bool ispossible(vector<int> &position,int mid,int m)
    {
      int cnt=1,pos=0;
      for(int i=1;i<position.size();i++)
      {
        if(position[i]-position[pos] >=mid)
        {
          cnt++;
          pos=i;
        }
      }
      if(cnt>=m)
        return true;
      return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int n=position.size(),ans=1;
        sort(position.begin(),position.end());
        int s=1,e=position[n-1]-position[0];
      while(s<=e)
      {
        int mid=(s+e)/2;
        if(ispossible(position,mid,m))
        {
          ans=mid;
          s=mid+1;
        }
        else
          e=mid-1;
      }
      
      return ans;
    }
  
};
