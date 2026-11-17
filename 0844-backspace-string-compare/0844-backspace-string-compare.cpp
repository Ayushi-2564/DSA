class Solution {
public:
    string getvalue(string s){
        int skip=0;
        string ans="";
    for(int i =s.size()-1;i>=0;i--){
if(s[i]=='#'){
    skip++;
    continue;
}
else if(skip>0){
    skip--;
    }

else{
ans.insert(0,1,s[i]);
}
    }
    return ans;
    }
    bool backspaceCompare(string s, string t) {
     return getvalue(s)==getvalue(t);
    }
};