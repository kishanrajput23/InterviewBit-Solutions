int Solution::lengthOfLastWord(const string A) {
    int cnt = 0;
    for (int i=A.size()-1; i>=0; i--) {
        if (A[i]!=' ' && ((A[i]>='a' && A[i]<='z') || (A[i]>='A' && A[i]<='Z'))) {
            cnt++;
        }
        
        if (A[i] == ' ' && cnt > 0) {
            break;
        }
    }
   return cnt;
}
