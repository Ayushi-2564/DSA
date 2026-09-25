class Solution {
public:
    unordered_map<int, int>dp;
    int fun(int i, int n){
     if(i==n)return 1;
      if(i>n)return 0;
     if(dp.find(i)!=dp.end())return dp[i];
     dp[i]=fun(i+1,n)+fun(i+2,n);
     return dp[i];
    }
    int climbStairs(int n) {
     return fun(0,n);
    }
};