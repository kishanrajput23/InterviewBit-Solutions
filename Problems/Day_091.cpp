int Solution::singleNumber(const vector<int> &A) {
    int ans = 0;
    for (auto i : A) {
        ans ^= i;
    }
    return ans;
}
