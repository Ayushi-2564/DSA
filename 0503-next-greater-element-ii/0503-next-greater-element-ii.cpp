class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    //     vector<int>ans(nums.size(),-1);
    //     bool found;
    //     for(int i =0;i<nums.size();i++){
    //        found=false;
    //         for(int j=i+1;j<nums.size();j++){
    //             if(nums[j]>nums[i]){
    //                 ans[i]=nums[j];
    //                 found=true;
    //                 break;
    //             }
    //         }
    //          if(found==false){
    //     for(int k=0;k<=i-1;k++){
    //         if(nums[k]>nums[i]){
    //             ans[i]=nums[k];
    //             break;
    //         }}
        
    //     }
    //    }return ans;
    nums.insert(nums.end(), nums.begin(), nums.end());
    stack<int>st;
    vector<int>ans(2*nums.size(),-1);
    for(int i =nums.size()-1;i>=0;i--){
    while(!st.empty()&& st.top()<=nums[i]){
        st.pop();
    }
    if(st.empty())
    ans[i]=-1;
    else{
    ans[i]=st.top();
        }
    st.push(nums[i]);
}
ans.resize(nums.size() / 2);

return ans;
    }
};