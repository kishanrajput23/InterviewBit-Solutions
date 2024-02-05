string Solution::solve(string A) {
    stringstream ss(A);
    string word;
    vector<string> v;
    string s = "";
    while (ss>>word) {
        v.push_back(word);
    }
    reverse(v.begin(), v.end());
    for (int i=0; i<v.size(); i++) {
        s += v[i] + " ";
    }
    s.pop_back();
    return s;
}
