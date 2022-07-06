class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
      int n=arr.size();
        if(arr[0]>k)
          return k;
      k=k-arr[0]+1;
      for(int i=1;i<arr.size();i++)
      {
       // cout<<(arr[i]-1-arr[i-1])<<" "<<k<<endl;
        if((arr[i]-1-arr[i-1])<k)
          k=k-(arr[i]-1-arr[i-1]);
        else
          return k+arr[i-1];
      }
      return arr[n-1]+k;
    }
};
