int Solution::maxSubArray(const vector<int> &A) {
    int sum = 0;
    int maxi = A[0];  
    for(int i=0; i<A.size(); i++) {
        sum += A[i];
        maxi = max(maxi, sum);
        if (sum < 0) {
            sum=0;
        }
    }  
    return maxi;
}
