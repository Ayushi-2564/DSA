class Solution {
public:
vector<int>dp;
  int fun(int i,int  end, vector<int>nums){
    if(i>end) return 0;
    if(dp[i]!=-1)return dp[i];
    int skip = fun(i+1,end,nums);
    int steal= nums[i]+fun(i+2,end,nums);
    dp[i]=max(skip, steal);
    return dp[i];

  }
    int rob(vector<int>& nums) {
         int n=nums.size();
         if(n == 1)
            return nums[0];
        dp.assign(n,-1);
        int case1= fun(0,n-2,nums);
        dp.assign(n,-1);
        int case2=fun(1,n-1, nums);
       
     return max(case1, case2);   
    }
};