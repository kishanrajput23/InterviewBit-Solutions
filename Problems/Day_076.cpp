vector<int> Solution::solve(vector<int> &A) {
    int M=1e9+7;
    int n=A.size();
    vector<int> ans(n);
    vector<int> left(n);
    vector<int> right(n);
    
    left[0]=A[0]; 
    right[n-1]=A[n-1];
    
    for(int i=1;i<n;i++){
        left[i]=( left[i-1] * 1LL * A[i]  ) % M;
    }
    for(int i=n-2; i>=0; i--){
        right[i]=( right[i+1] * 1LL * A[i]  ) % M;
    }
    
    ans[0]=right[1];
    ans[n-1]=left[n-2];
    for(int i=1;i < n-1;i++){
        ans[i]=( left[i-1] * 1LL * right[i+1]  ) % M;
    }
    return ans;
}
