class Solution {
public:
  vector<int>dp;
   int fun(int i,vector<int>& nums){
    
    if(i>=nums.size())return 0;
    if(dp[i]!=-1)return dp[i];
   int steal= nums[i]+fun(i+2, nums);
   int skip= fun(i+1, nums);
   dp[i]=max(steal, skip);
   return dp[i];
   }
    int rob(vector<int>& nums) {
      
dp.resize(nums.size(),-1);
     return fun(0,nums);
    }
};