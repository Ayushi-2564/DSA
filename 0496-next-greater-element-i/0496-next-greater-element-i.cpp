class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    //     vector<int>ans(nums2.size(),-1);
    //   for(int i =0;i<nums2.size();i++){
    //     for(int j =i+1;j<nums2.size();j++){
    //         if(nums2[j]>nums2[i]){
    //             ans[i]=nums2[j];
    //             break;
    //         }
    //     }
    //   }  
    //   vector<int>ans2;
    //   for(int i =0;i<nums1.size();i++){
    //     for(int j =0;j<nums2.size();j++){
    //         if(nums1[i]==nums2[j]){
    //             ans2.push_back(ans[j]);
    //         }
    //     }
    //   }
    //   return ans2;
   unordered_map<int, int>mp;

    stack<int>st;
 
    for(int i =nums2.size()-1;i>=0;i--){
    
    while(!st.empty()&&st.top()<=nums2[i]){
        st.pop();
    }
    if(st.empty())mp[nums2[i]]=-1;
    else mp[nums2[i]]=st.top();
    st.push(nums2[i]);
    }
   vector<int>ans;
    for(int i =0;i<nums1.size();i++){
    ans.push_back(mp[nums1[i]]);
   
    } return ans;
    }
};