vector<int> Solution::solve(string A) {
    string s = "";
    vector<int> v;
    
    for (int i=0; i<A.length(); i++) {
        if (A[i] != ',') {
            s += A[i];
        }
        else {
            v.push_back(stoi(s));
            s = "";
        }
    }
    v.push_back(stoi(s));
    return v;
}
