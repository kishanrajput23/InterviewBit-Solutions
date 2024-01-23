string Solution::solve(string A) {
     int freq[26] = {0}; 
   
    for (int i=0; i<A.size(); i++) {
        freq[A[i] - 'a']++;
    }
   
    string ans = "";
    for (int i=0; i<A.size(); i++) {
        if (freq[A[i] - 'a'] > 0) {
            ans += A[i]; 
            ans += to_string(freq[A[i] - 'a']); 
            freq[A[i] - 'a'] = 0; 
        }
    }
   
    return ans;
}
