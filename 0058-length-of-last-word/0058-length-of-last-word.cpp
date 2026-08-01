class Solution {
public:
    int lengthOfLastWord(string s) {
        s=s+' ';
        string w="";
        vector<string> v;
        for(char ch:s){
            if(ch==' '){
                if(w!=""){
                    v.push_back(w);
                    w="";
                }
            }else
            w+=ch;
        }
        string ans=v[v.size()-1];
        return ans.size();
    }
};