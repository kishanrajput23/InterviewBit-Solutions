int Solution::isPalindrome(string A) {
    string res;
    
    for (auto ch:A) {
        if (isalnum(ch)) {
            res += tolower(ch);
        }
    }
    
    int i=0;
    int j = res.length()-1;
    
    while(i<j) {
        if (res[i]==res[j]) {
            i++;
            j--;
        }
        else {
            return 0;
        }
    }
    return 1;
}
