int Solution::strStr(const string A, const string B) {
    int n = A.length(), m = B.length();
	for (int i=0; i<n-m+1; i++) {
		int j = 0;
		while (j < m) {
			if (A[i+j] == B[j]) {
                j++;
            }
			else {
                break;
            }
		}
		if (j==m) {
            return i;
        }
	}
	return -1;
}
