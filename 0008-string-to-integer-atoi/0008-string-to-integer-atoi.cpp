class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n=s.size();
        //skipping whitespaces
        while(i<n && s[i]==' ')
        i++;

        //detecting sign
        int sign=1;
        while(i<n &&(s[i]=='+'||s[i]=='-'))
        {
            if( (s[i]=='-'&& s[i+1]=='+') || (s[i]=='+'&& s[i+1]=='-') || (s[i]=='+'&&s[i+1]=='+') || (s[i]=='-'&&s[i+1]=='-'))
            return 0;
            if(s[i]=='-')
            sign=-1;
            i++;
        }
        
        long long ans=0;
        while(i<n && isdigit(s[i])){
            ans=ans*10+(s[i]-'0');

            if(sign*ans >=INT_MAX)
            return INT_MAX;

            if(sign*ans <=INT_MIN)
            return INT_MIN;

            i++;
        }
        return ans*sign;
    }
};