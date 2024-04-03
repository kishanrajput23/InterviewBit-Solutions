int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    map<int, int> mp;

    for (auto i : A) {
        mp[i]++;
    }
    
    A.clear();
    
    for (auto i : mp) {
        A.push_back(i.first);
    }
    
    return A.size();
}
