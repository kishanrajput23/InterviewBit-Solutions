int Solution::removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = 0;
    for (int i=0; i<A.size(); i++) {
        if (A[i] != B) {
            A[n] = A[i];
            n++; 
        }
    }
    return n;
}
