#include<vector>
class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26,0);
        for(int i=0;s[i]!='\0';i++){
            freq[s[i]-'a']++;
        }
        string left="";
        string middle="";
        for(int i=0;i<26;i++){
            if(freq[i]%2!=0){
                middle+=char(i+'a');
            }
        left.append(freq[i]/2,char(i+'a'));
        }
        string right=left;
        reverse(right.begin(),right.end());

        return left+middle+right;
    }
};