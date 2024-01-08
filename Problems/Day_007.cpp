void Solution::rotate(vector<vector<int> > &A) {
    int n = A.size();
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            swap(A[i][j], A[j][i]);
        }
    }
    
    for (int i=0; i<n; i++) {
        reverse(A[i].begin(), A[i].end());
    }
    
}
