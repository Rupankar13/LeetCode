class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long dvd = abs((long long)dividend);
        long long dvs = abs((long long)divisor);

        long long ans = 0;

        while (dvd >= dvs) {

            long long temp = dvs;
            long long count = 1;

            while (dvd >= (temp << 1)) {
                temp <<= 1;
                count <<= 1;
            }

            dvd -= temp;
            ans += count;
        }

        if ((dividend < 0) != (divisor < 0))
            ans = -ans;

        return ans;
    }
};