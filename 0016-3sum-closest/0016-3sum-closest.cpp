class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n= nums.size();
        vector<int>ans;
        int ressum=0;
        int maxdiff=INT_MAX;
        sort(nums.begin(), nums.end());
        for(int i =0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
                  int s= nums[i]+nums[left]+nums[right];
                  
                  int dif= abs(target-s);
            
            if(maxdiff>dif){
                maxdiff=dif;
                ressum=s;
            }
            if(s<target)left++;
            else right--;
}
          }
        return ressum;
    }
};