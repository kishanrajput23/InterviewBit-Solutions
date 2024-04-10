#define mod 10000000

int Solution::solve(int A, int B) {
    long long sum = ((A%mod)+(B%mod))%mod;
    return sum;
}
