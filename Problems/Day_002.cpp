vector<int> Solution::solve(vector<int> &A) {
    int count = 0;
    for (int i=0; i<A.size(); i++) {
        if (A[i] == 0) {
            A[count++] = 0;
        }
    }
    
    while (count < A.size()) {
        A[count++] = 1;
    }
    
    return A;
}
