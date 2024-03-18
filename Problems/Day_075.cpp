long Solution::solve(string A) {
    long long sum = 0;
    string s = "0";
    for (int i=0; i<A.length(); i++) {
        if (isdigit(A[i])) {
            s += A[i];
        }
        else {
            sum += stoi(s);
            s = "0";
        }
    }
    sum += stoi(s);
    return sum;
}
