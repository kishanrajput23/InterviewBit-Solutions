int Solution::solve(vector<int> &A) {
    int maxi = *max_element(A.begin(), A.end());
    int mini = *min_element(A.begin(), A.end());
    return maxi+mini;
    
}
