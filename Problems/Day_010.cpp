int Solution::solve(vector<int> &A, int B) {
    int sum = 0;
    for (int i=0; i<B; i++) {
        sum += A[i];
    } 
    
    int ans = sum;
    int x = A.size()-1;
    for (int i=B-1; i>=0; i--) {
        sum -= A[i];        //in each iteration substract one element from sum, from beginning
        sum += A[x--];      //add one element from ending
        ans = max(ans, sum); // update ans
    }
    return ans;
}
