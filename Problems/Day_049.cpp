int Solution::diffPossible(vector<int> &A, int B) {
    int i=0, j=1;

    while (i<A.size() && j<A.size()) {
        if ((A[j] - A[i] == B) && i != j) {
            return 1;
        }
        else if (A[j]-A[i] > B) {
            i++;
        }
        else {
            j++;
        }
    }
    return 0;
}
