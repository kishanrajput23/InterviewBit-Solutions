int Solution::solve(string A) {
    stack<char> s;
    
    for (int i=0; i<A.length(); i++) {
        if (!s.empty() && A[i] == ')' && s.top() == '(') {
            s.pop();
        }
        else {
            s.push(A[i]);
        }
    }
    return s.empty();
}
