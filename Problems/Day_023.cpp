int Solution::permuteStrings(string A, string B) {
    int n = A.length();
    int m = B.length();

    if (n != m){
        return 0;
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    for(int i=0; i< B.length(); i++){
        if(A[i] != B[i]){
            return 0;
        }
    }
    return 1;
}
