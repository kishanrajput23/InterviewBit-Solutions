int Solution::solve(vector<int> &A, int B) {
    
    sort(A.begin(), A.end());
    
    for (int i=1; i<A.size(); i++) {
        if (A[i] - A[i-1] != B & A[i]- A[i-1] != 0) {
            return 0;
        }
    }
    return 1;
}
