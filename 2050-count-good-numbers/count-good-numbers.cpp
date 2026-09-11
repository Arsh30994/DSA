class Solution {
public:
    static const long long MOD = 1000000007;
    long long power(long long x, long long n) {
        if(n == 0) {
            return 1;
        }
        long long half = power(x, n / 2);
        if(n % 2 == 0) {
            return (half * half)%MOD;
        }
        else {
            return (x * half%MOD* half)%MOD;
        }
    }
    int countGoodNumbers(long long n){
        long long evencount = (n + 1)/2;
        long long oddcount = n/2;
        long long evenways = power(5,evencount);
        long long oddways = power(4,oddcount);
        return (oddways * evenways)%MOD;
    }
};