int Solution::repeatedNumber(const vector<int> &A) {
    vector<int> v;
    
    for (int i=0; i<A.size(); i++) {
        v.push_back(A[i]);
    }
    
    sort(v.begin(), v.end());
    
    for (int i=0; i<v.size()-1; i++) {
        if (v[i] == v[i+1]) {
            return v[i];
        }
    }
    return -1;
}
