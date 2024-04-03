int Solution::solve(string A) {
    int n = A.length();
    int answer = 0;
    for (int i=0; i<n; i++) {
        char ch = tolower(A[i]);
        if (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u') {
            answer += (n-i);  //n-i possible sequences
        }
    }
    return(answer%10003);
}
