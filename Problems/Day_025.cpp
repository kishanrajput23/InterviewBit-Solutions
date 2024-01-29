vector<string> Solution::deserialize(string A) {
    vector<string> ans;
    string s = "";
    for (int i=0; i<A.length(); i++) {
        if (isalpha(A[i])) {
            s += A[i];
        }
        if (A[i] == '~') {
            ans.push_back(s);
            s = "";
        }
    }
    return ans;
}
