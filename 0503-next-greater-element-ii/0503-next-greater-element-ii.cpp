class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans(nums.size(),-1);
        bool found;
        for(int i =0;i<nums.size();i++){
           found=false;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]>nums[i]){
                    ans[i]=nums[j];
                    found=true;
                    break;
                }
            }
             if(found==false){
        for(int k=0;k<=i-1;k++){
            if(nums[k]>nums[i]){
                ans[i]=nums[k];
                break;
            }}
        
        }
       }return ans;
    }
};