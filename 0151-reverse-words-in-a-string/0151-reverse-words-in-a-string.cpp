class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string w="";
        s=s+' ';
        vector<string> v;
        for(char ch:s){
            if(ch==' '){
                if(w!=""){
                    v.push_back(w);
                    w="";
                }
            }else
            w=w+ch;
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            ans+=v[i];
            if(i!=v.size()-1)
            ans+=" ";
        }
        return ans;
    }
};