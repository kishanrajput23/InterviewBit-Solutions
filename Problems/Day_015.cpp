vector<int> Solution::findOccurences(vector<int> &A) {
    vector<int> res;
    int i=0,count=1;
    
    sort(A.begin(),A.end());
    
    while (i<A.size()-1) {
        if (A[i] != A[i+1]) {
            res.push_back(count);
            count=1;
        }
        else {
            count++;
        }
        i++;
    }
    res.push_back(count);
    return res;
}
