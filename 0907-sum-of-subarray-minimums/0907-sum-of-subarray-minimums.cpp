class Solution {
public:
vector<int> nse(vector<int>& arr){
int n=arr.size();
stack<int>st;
vector<int>ans(n);
for(int i=n-1;i>=0;i--){
while(!st.empty() && arr[st.top()]>=arr[i]){
    st.pop();
}
ans[i]=!st.empty()?st.top():n;
st.push(i);

}

return ans;
}
vector<int> pse(vector<int>&arr){
    int n=arr.size();
    vector<int>ans(n);
    stack<int>st;
    for(int i =0;i<n;i++){
        while(!st.empty()&&arr[st.top()]>arr[i]){
            st.pop();
        }
        ans[i]=!st.empty()?st.top():-1;
        st.push(i);
    }
    return ans;
}

    int sumSubarrayMins(vector<int>& arr) {
//         const int mod=1000000007;
//         int n=arr.size();long long sum=0;
//        for(int i =0;i<n;i++) {
//          int mini=arr[i];
//         for(int j =i;j<n;j++){
           
//             if(mini>arr[j]){
//                 mini=arr[j];
//             }
//             sum+=mini;
//         }
//        }
// return (sum%mod);
int n=arr.size();
int mod=1000000007;
stack<int>st1;
stack<int>st2;long long sum=0;
 vector<int>NSE=nse(arr);
    vector<int>PSE=pse(arr);
for(int i =0;i<n;i++){
   
int a =NSE[i]-i;
int b=i-PSE[i];
sum=(sum+1LL*a*b*arr[i])%mod;

    }
    return sum;}
};