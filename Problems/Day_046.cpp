bool isPalindrome(int n) {
    int rev = 0;
    
    int temp = n;
    
    while(temp > 0) {
        int rem = temp%10;
        rev = rev*10 + rem;
        temp /= 10;
    }
    return rev == n;
}

int Solution::solve(int A, int B, int C) {
    
    vector<int> v;
    
    for (int i=A; i<=B; i++) {
        if (isPalindrome(i)) {
            v.push_back(i);
        }
    }
    int ans = 0;
    int i = 0, j = 0;
    while (j < v.size()) {
        if (v[j] - v[i] <= C) {
            ans = max(ans, j-i+1);
            j++;
        }
        else {
            i++;
        }
    }
    return ans;
}
