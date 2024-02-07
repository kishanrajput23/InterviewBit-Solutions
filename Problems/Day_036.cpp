int Solution::solve(vector<int> &A, int B) {
    int start = 0;
    int end = A.size()-1;
    
    int mid = start + (end-start)/2;
    
    while (start <= end) {
        if (A[mid] > B) {
            end = mid-1;
        }
        else {
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return start;
}
