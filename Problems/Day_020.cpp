vector<int> Solution::solve(vector<int> &A) {
    int i=0;
    bool flag = true;
    vector<int> v;
    
    while (i<A.size()) {
        for (int j=i+1; j<A.size(); j++) {
            if (A[i] < A[j]){
                flag = false;
                break;
            }
        }
        
        if (flag == true) {
            v.push_back(A[i]);
        }
        
        else {
            flag = true;
        }
        
        i++;
    }
    
    return v;
}
