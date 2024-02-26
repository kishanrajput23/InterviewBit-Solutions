string Solution::reverseString(string A) {
    stack<char> s;
    for (int i=0; i<A.size(); i++) {
        s.push(A[i]);
    }
    
    for (int i=0; i<A.size(); i++) {
        A[i] = s.top();
        s.pop();
    }
    
    return A;
}
