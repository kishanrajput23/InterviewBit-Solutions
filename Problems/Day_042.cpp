int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int ans = 0;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; ++i) {
        // Check the frequency of elements within the window
        ans += freq[A[i]];

        // Update the frequency of the current element in the window
        freq[A[i]]++;

        // Remove the element that goes out of the window
        if (i >= B) {
            freq[A[i - B]]--;
        }
    }

    return ans;
}
