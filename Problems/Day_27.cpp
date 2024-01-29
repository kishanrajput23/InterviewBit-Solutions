int Solution::gcd(int A, int B) {
    int ans=1;
    if (A==0 || B==0) {
        return max(A,B);
    }
    for (int i=2; i<=min(A,B); i++) {
        if (A%i==0 && B%i==0) {
            ans = max(i, ans);
        }
    }
    return ans;
}
