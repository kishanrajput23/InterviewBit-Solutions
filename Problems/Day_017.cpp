string Solution::multiply(string A, string B) {
    if (A == "0" || B == "0") {
        return "0";
    }
    vector<int> result(A.size() + B.size(), 0);

    for (int i = A.size() - 1; i >= 0; --i) {
        for (int j = B.size() - 1; j >= 0; --j) {
            result[i + j + 1] += (A[i]-'0') * (B[j] - '0');
            result[i + j] += result[i + j + 1] / 10;
            result[i + j + 1] %= 10;
        }
    }

    int i=0;
    while (i<result.size() && result[i] == 0) {
        ++i;
    }
    
    string res = "";
    
    while(i<result.size()) {
        res.push_back(result[i++] + '0');
    }

    return res;
}
