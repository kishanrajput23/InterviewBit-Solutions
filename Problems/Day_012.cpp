vector<int> Solution::addArrays(vector<int> &A, vector<int> &B) {
    vector<int> res;
    int  i = A.size()-1;
    int  j = B.size()-1;
    int carry = 0;

    while (i>=0 || j>=0 || carry) {
        int num1 =  i>=0 ? A[i] : 0;
        int num2 = j>=0 ? B[j] : 0;
        int sum = num1 + num2 + carry;

        res.push_back(sum%10);
        carry = sum/10;

        i--;
        j--;
    }
    
    reverse(begin(res),end(res));
    return res;
}
