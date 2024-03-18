vector<int> Solution::solve(vector<int> &A) {
    vector<int> v;
    int pos = 0;
    int neg = 0;
    for (auto i : A) {
        if (i < 0) {
            neg++;
        }
        else if (i==0) {
            continue;
        }
        else {
            pos++;
        }
    }
    v.push_back(pos);
    v.push_back(neg);
    return v;
}
