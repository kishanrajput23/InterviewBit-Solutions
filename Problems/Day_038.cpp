int Solution::solve(string A) {
    unordered_map<char, int> freq;
    for (int i=0;i<A.size();i++) {
        freq[A[i]]++;
    }
    
    int odd_count = 0;
    
    for (auto it : freq) {
        if (it.second % 2 != 0) {
            odd_count++;
        }
    }
    return odd_count <= 1;
}
