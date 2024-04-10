int Solution::trap(const vector<int> &A) {
    int n = A.size();
    int maxLeft = 0, maxRight = 0, water = 0;
    int maxHeight = A[0], index = 0;
    
    // step 1 : find maximum height;
    for (int i=1; i<n; i++) {
        if (A[i] > maxHeight) {
            maxHeight = A[i];
            index = i;
        }
    }
    
    // step 2 : solve left part 
    for (int i=0; i<index; i++) {
        if (maxLeft > A[i]) {
            water += maxLeft - A[i];
        }
        else {
            maxLeft = A[i];
        }
    }
    
    // step 3 : solve right part
    for (int i=n-1; i>index; i--) {
        if (maxRight > A[i]) {
            water += maxRight - A[i];
        }
        else {
            maxRight = A[i];
        }
    }
    
    return water;
}
