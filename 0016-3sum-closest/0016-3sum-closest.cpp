class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    //     int n=nums.size();
    //     int ans=nums[0]+nums[1]+nums[2];
    //   for(int i=0;i<n-2;i++){
    //     for(int j=i+1;j<n-1;j++){
    //         for(int k=j+1;k<n;k++){
    //             int sum=(nums[i]+nums[j]+nums[k]);
    //         if(abs(target-sum)<abs(target-ans)){
    //             ans=sum;
    //         }
    //         }
    //     }
    //   }return ans;
  
    int n=nums.size();
   sort(nums.begin(),nums.end());
     int closestSum=nums[0]+nums[1]+nums[2];
    for(int i =0;i<n-2;i++){
   
    int p=i+1;
    int q=n-1;
  
    while(p<q){ 
          int sum=nums[i]+nums[p]+nums[q];
        if(abs(target-sum)<abs(target-closestSum)){
        closestSum=sum; }
      if(sum<target)p++;
      else{q--;}  
    }
   
    }return closestSum;

    }
};