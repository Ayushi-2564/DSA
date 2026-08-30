class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
     stack<int>st;
     int n=asteroids.size();
    
  
     int i=0;
     while(i<n){
         bool destroy=false;
        while(!st.empty()&& st.top()>0&&asteroids[i]<0){
            if(abs(st.top())==abs(asteroids[i])){
                st.pop();
                destroy=true;
                break;
                }
            else if(abs(st.top())>abs(asteroids[i])){
                destroy=true;
                break;
            }
            else{
                st.pop();
                
            }
       
        }
        if(destroy==false){
            st.push(asteroids[i]);
        }
        i++;
     } 
     vector<int>ans;
       while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans; 
     return ans; 
    }
};