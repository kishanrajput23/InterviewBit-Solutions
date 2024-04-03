int Solution::solve(string A, int B) {
    int ans = INT_MIN;
    for (int i=0; i<A.size(); i+=B){
        string str = A.substr(i,B);
        int temp = 0;
        for (auto it : str){
            if (it == 'a') {
                temp++;
            }
        }
        ans = max(ans, temp);
    }
    return ans;
}
