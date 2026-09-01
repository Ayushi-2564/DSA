class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int left=0;
      int ans=0;
      int n=s.length();
     
      vector<int>freq(256);
      for(int right=0;right<n;right++){
      while((freq[s[right]])>0){
        freq[s[left]]--;
        left++;
       }
         freq[s[right]]++;
      int count=right-left+1;
 
      ans=max(ans, count);
     
      }  
      return ans;
    }
};