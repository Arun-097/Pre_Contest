class Solution {
public:
    int minOperations(vector<int>& nums) {
      int ans=0,mx=*max_element(nums.begin(),nums.end());
      
      // to find the max number of multiple by 2
      while(mx>1)
      {
        ans++;
        mx=mx>>1;
      }
      
      // to find out the max numbers of adding 1
      for(int i=0;i<nums.size();i++)
      {
        int val=nums[i],set=0;
        while(val)
        {
          set++;
          val=val&(val-1);
        }
        ans+=set;
      }
      return ans;
    }
};
