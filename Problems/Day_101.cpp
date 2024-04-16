#include <numeric>
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> v(A.size()+1, 0);
    long long n = A.size();
    
    int X, Y;
    
    for (int i=0; i<A.size(); i++) {
        if (v[A[i]] > 0) {
            X = A[i];
            break;
        }
        v[A[i]]++;
    }
    
    long long tsum = (n*(n+1)) / 2;
    long long sum = accumulate(A.begin(), A.end(), 0);
    sum = sum - X;
    
    return {X, tsum-sum};
}
