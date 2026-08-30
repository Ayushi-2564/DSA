class Solution {
public:

vector<int> nse(vector<int>& nums){
    int n=nums.size();
vector<int>ans1(n);
stack<int>st;
for(int i =n-1;i>=0;i--){
while(!st.empty()&& nums[st.top()]>=nums[i]){
    st.pop();
}
ans1[i]=!st.empty()?st.top():n;
st.push(i);
}
return ans1;
}

vector<int> pse(vector<int>& nums){
int n=nums.size();
vector<int>ans2(n);
stack<int>st;
for(int i =0;i<n;i++){
while(!st.empty()&& nums[st.top()]>nums[i]){
    st.pop();
}
ans2[i]=!st.empty()?st.top():-1;
st.push(i);
}
return ans2;
}
vector<int> nge(vector<int>& nums){
int n=nums.size();
vector<int>ans3(n);
stack<int>st;
for(int i =n-1;i>=0;i--){
while(!st.empty()&& nums[st.top()]<=nums[i]){
    st.pop();
}
ans3[i]=!st.empty()?st.top():n;
st.push(i);
}
return ans3;
}
vector<int> pge(vector<int>& nums){
int n=nums.size();
vector<int>ans4(n);
stack<int>st;
for(int i =0;i<n;i++){
while(!st.empty()&& nums[st.top()]<nums[i]){
    st.pop();
}
ans4[i]=!st.empty()?st.top():-1;
st.push(i);
}
return ans4;
}

    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans1=nse(nums);
        vector<int>ans2=pse(nums);
        vector<int>ans3=nge(nums);
        vector<int>ans4=pge(nums);
     
       // sum of minimums;
       long long sumofmins=0;
      for(int i=0;i<n;i++){
      int a=ans1[i]-i;
      int b=i-ans2[i];
      sumofmins=sumofmins+(1LL*a*b*nums[i]);
      }
      //sum of maxs
      long long sumofmaxs=0;
      for(int i=0;i<n;i++){
      int a=ans3[i]-i;
      int b=i-ans4[i];
      sumofmaxs=sumofmaxs+(1LL*a*b*nums[i]);
      }
      return sumofmaxs-sumofmins; 
    }
};