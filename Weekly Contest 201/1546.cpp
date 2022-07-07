class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        map<int,int> mp;
       int sum=0,pos=-1,ans=0;
      mp[0]=-1;
      for(int i=0;i<nums.size();i++)
      {
        sum+=nums[i];
         int d=sum-target;
        if(mp.find(d)!=mp.end() && mp[d]>=pos)
        {
          ans++;
          pos=i;
        }
          mp[sum]=i;
      }
      
      return ans;
    }
};
