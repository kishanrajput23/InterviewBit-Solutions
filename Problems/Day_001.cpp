vector<int> Solution::solve(vector<int> &A) {
    int count = 0;
    for (int i=0; i<A.size(); i++) {
        if (A[i]!=0) {
            A[count] = A[i];
            count++;
        }
    }
    
    while(count<A.size()) {
        A[count] = 0;
        count++;
    }
    return A;
}
