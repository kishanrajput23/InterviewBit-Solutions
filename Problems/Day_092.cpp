vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    map<int, int> mp1;
    
    for (auto i : A) {
        mp1[i]++;
    }
    
    vector<int> v;
    
    for (auto i : B) {
        if (mp1[i] > 0) {
            v.push_back(i);
            mp1[i] -= 1;
        }
    }
    
    return v;
}
