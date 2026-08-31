class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.length();
        if(n<=k) return "0";
        stack<char>st;
        
       for(int i=0;i<n;i++){
           while(!st.empty()&& k>0&& num[i]<st.top()){
            st.pop();
            k--;
           }
          
          st.push(num[i]);
       } 
       
        while(!st.empty()&&k>0){
           st.pop();
           k--;
           }
           if(st.empty()) return "0";
           string ans="";
        while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
       }
      
       while(ans.length()>0 && ans.back()=='0'){
        ans.pop_back();
       }
         reverse(ans.begin(), ans.end());
         if(ans.empty()) return "0";
      
      
       return ans;
    }
};