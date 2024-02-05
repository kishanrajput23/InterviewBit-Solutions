int Solution::solve(string A) {
    int count = 0;
    int ans = 0;
    for (int i=0; i<A.length(); i++) {
        if (A[i] == '(') {
            count++;
        }
        else {
            count--;
            if (count<0) {
                ans++;
                count = 0;
            }
        }
    }
    ans += count;
    return ans;
}
