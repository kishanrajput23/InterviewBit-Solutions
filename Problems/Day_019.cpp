int Solution::findCount(const vector<int> &A, int B) {
    int count = 0;
    for (int i=0; i<A.size(); i++) {
        if (A[i] == B) {
            count++;
        }
    }
    return count;
}
