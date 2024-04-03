string Solution::solve(string A) {
    string t= "";
     for (auto val : A ){
        // auto temp;
        if (val>='A' && val<='Z') {
            t+=(val | ' ');
        }
        else {
            t += (val & '_');
        }
    }
    return t;
}
