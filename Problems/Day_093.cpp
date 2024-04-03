int Solution::solve(vector<int> &A, int B, int C) {
    int fine = 0;
    
    for (auto i : A) {
        if (i%2 != B%2) {
            fine += C;
        }
    }
    
    return fine;
}
