vector<int> Solution::solve(string A) {
    vector<int> result(26, 0); // Initialize result vector with 26 zeros

    for (char c : A) {
        if (isalpha(c)) {   // Check if the character is an alphabet letter
            result[c - 'a']++; // Increment the corresponding element in the result vector
        }
    }

    return result;
}
