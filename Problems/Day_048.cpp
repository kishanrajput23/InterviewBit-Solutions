int Solution::solve(string A) {
    int n = A.size();
    int count = 0;
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            if (i != j) {
                int a = i; 
                int b = j;
                int flag = 1;
                while (a < b) {
                    if (A[a] != A[b]) {
                        flag  = 0;
                    }
                    a++; 
                    b--;
                }
                if (flag) {
                    count++;
                }
            }
            else {
                count++;
            }
        }
    }
    return count;
}
