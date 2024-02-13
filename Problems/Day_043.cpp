int Solution::solve(string A) {
    stringstream ss(A);
    string word;
    vector<string> v;
    
    while(ss>>word) {
        v.push_back(word);
    }
    
    return v.size();
}
