int Solution::kthsmallest(const vector<int> &A, int B) {
    vector<int> arr;
    arr = A; 
    sort(arr.begin(), arr.end());
    return arr[B-1] ;
}
