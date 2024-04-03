int Solution::solve(vector<int> &A) {
    int x = 1;
    for(int i=1; i<=A.size(); i++) {
        x = (x * 2) % 1000000007;
    }
    return x-1;
}
