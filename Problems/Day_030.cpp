vector<int> Solution::solve(string A) {
    int arr[26] = {0};
    vector<int> v;
    
    for (int i=0; i<A.length(); i++) {
        arr[A[i] - 'a']++;
    }
    
    for (int i=0; i<A.length(); i++) {
        if (arr[A[i] - 'a'] > 0) {
            v.push_back(arr[A[i] - 'a']);
            arr[A[i] - 'a'] = 0;
        }
    }
    
    return v;
}
