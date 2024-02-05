bool check(string s, int i, int j) {
    while(i <= j) {
        if(s[i] != s[j]) {
            return false;
        }
        i++; 
        j--;
    }
    return true;
}


int Solution::solve(string s) {
    int i = 0;
    int j = s.length()-1;

    if (check(s, i, j)) {
        return 1;
    }

    while(i <= j) {
        if (s[i] == s[j]) {
            i++;
            j--;
        }
        else {
            if (check(s, i+1, j) || check(s, i, j-1)) {
                return 1;
            }
            else {
                return 0;
            }
        }
    }
    return 0;
}
