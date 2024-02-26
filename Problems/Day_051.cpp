bool isPalindrome(string s) {
    int i=0;
    int j=s.length()-1;
    
    while (i<j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int Solution::solve(string A) {
    stringstream ss(A);
    string word;
    int count = 0;
    while(ss>>word) {
        if (isPalindrome(word)) {
            count++;
        }
    }
    return count;
}
