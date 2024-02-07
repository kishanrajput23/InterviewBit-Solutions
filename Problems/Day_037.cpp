void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more detailnds
    int countOne = 0;
    int countTwo = 0;
    int countZero = 0;
    int i = 0;
    while (i<A.size()) {
        if (A[i]==0) {
            countZero++;
        }
        else if (A[i]==1) {
            countOne++;
        }
        else if (A[i]==2) {
            countTwo++;
        }
        i++;
    }
        
    int j = 0;
    while (j<A.size()) {
        if (countZero!=0) {
            A[j]=0;
            countZero--;
        }
        else if (countOne!=0) {
            A[j]=1;
            countOne--;
        }
        else if (countTwo!=0) {
            A[j]=2;
            countTwo--;
        }
        j++;
    }
}
