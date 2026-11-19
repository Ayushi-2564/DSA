class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low=0;
        int high=0;
        unordered_map<int, int>fq;
        int n=fruits.size();
        int res=0;
        while(high<n){
            fq[fruits[high]]++;
        
            while(fq.size()>2){
               
                fq[fruits[low]]--;
                
                if(fq[fruits[low]]==0){
                    fq.erase(fruits[low]);
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