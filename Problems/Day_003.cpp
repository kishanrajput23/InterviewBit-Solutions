int Solution::solve(vector<int> &A) {
    int start = 0;
    int end = A.size()-1;

    int mid = start + (end-start)/2;

    while (start < end) {

        if (A[mid] < A[mid+1]) {
                start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return A[end];
}
