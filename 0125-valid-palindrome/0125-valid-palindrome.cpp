class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(char ch:s){
            if(isalnum(ch))
            ans+=tolower(ch);
        }
        string rev=ans;
        reverse(rev.begin(),rev.end());
        return rev==ans;
    }
};