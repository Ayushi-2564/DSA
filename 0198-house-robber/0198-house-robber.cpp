class Solution {
public:
unordered_map<int, int>dp;
int fun(int i,vector<int>& nums){
if(i==0)return nums[0];
if(i<0)return 0; 
if(dp.find(i)!=dp.end())return dp[i];
dp[i]=max(fun(i-1, nums), nums[i]+fun(i-2,nums));
return dp[i];
}
    int rob(vector<int>& nums) {
   int n=nums.size();
      return fun(n-1, nums); 
    }
};