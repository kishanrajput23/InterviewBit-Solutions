int Solution::solve(vector<int> &A, int B) {
    map<int, int> mp;
    
    for (auto i : A) {
        mp[i]++;
    }
    
    int count = 0;
    
    for (int i=0; i<A.size(); i++) {
        int val = A[i] ^ B;
        
        if (mp[val] > 0) {
            count++;
        }
    }
    return count/2;
}
