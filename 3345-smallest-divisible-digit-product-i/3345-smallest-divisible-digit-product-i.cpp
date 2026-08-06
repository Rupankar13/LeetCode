class Solution {
public:
    int smallestNumber(int n, int t) {
        long long product;;
        while(n>0){
            int copy=n;
            product=1;
            while(copy!=0){
                int d=copy%10;
                product*=d;
                copy=copy/10;
            }
            if(product%t==0)
            return n;
            n+=1;
        }
        return 0;

    }
};