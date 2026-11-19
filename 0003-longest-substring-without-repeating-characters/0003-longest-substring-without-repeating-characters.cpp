class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0;
        int high=0;
        int n=s.length();
        int res=0;
      
        unordered_map<char, int>fq;
        while(high<n){
        fq[s[high]]++;
        while(fq[s[high]]>1){
         fq[s[low]]--;
        if(fq[s[low]]==0){
        fq.erase(s[low]);
      }
   low++;
 
       }
   int len=high-low+1;
       res=max(res, len);
        high++;
        }
        return res;
    }
};