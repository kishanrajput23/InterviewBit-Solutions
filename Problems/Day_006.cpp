int Solution::majorityElement(const vector<int> &A) {
    int n = A.size();
    int element = A[0];
    int count=0;
    for(int i=0; i<n; i++){
        if(count == 0)
            element = A[i];
           
        if(element == A[i])
            count += 1;
        else
            count -= 1;
    }
   
    return element;
}
