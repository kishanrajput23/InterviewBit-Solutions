string Solution::serialize(vector<string> &A) {
    string s = "";
    for (int i=0; i<A.size(); i++) {
        int len = A[i].length();
        s += A[i] + to_string(len) + "~";
    }
    return s;
}
