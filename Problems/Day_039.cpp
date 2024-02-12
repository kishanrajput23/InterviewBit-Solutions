int Solution::trailingZeroes(int A) {
    int x = 5, ans = 0;

    while(x<=A){

        ans += A/x;

        x *= 5;

    }

    return ans;
}

