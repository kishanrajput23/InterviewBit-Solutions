vector<int> Solution::solve(vector<vector<int> > &A) {
    vector<int> v;
    for (int i=0; i<A.size(); i++) {
        for (int j=0; j<A[i].size(); j++) {
            v.push_back(A[i][j]);
        }
    }
    sort(v.begin(), v.end());
    return v;
}
