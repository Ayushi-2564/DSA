class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int n=nums.size();
        int zeros=0;
        int ans=0;
        for(int right=0;right<n;right++){
            if(nums[right]==0){
            zeros++;
            }
            while(zeros>k){
               
                if(nums[left]==0){
                    zeros--;
                }
                 left++;
            }
            int count=right-left+1;
            ans=max(ans, count);
        }
        return ans;
    }
};