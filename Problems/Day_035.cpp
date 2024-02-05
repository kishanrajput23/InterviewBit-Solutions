string Solution::solve(string A, int B) {
    int count = 1;
    string ans;
    int i;
 
    string s = "";
    s += A[0];
    for (i=1; i<A.size(); i++) {
        if (A[i-1] == A[i]) {
            s += A[i];
            count++;
        }
        else {
            if (count != B) {
                ans+=s;
            }
            s = A[i];
            count = 1;
        }
    }
    
    if(count!= B) {
        ans += s;
    }
    
    return ans;
}
