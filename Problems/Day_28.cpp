long Solution::countSalutes(string A) {
    long salute = 0;
    int ltr = 0;
    for(int i = 0 ; i < A.size() ; i++) {
        if (A[i] == '>') {
            ltr++;
        }
        
        if (A[i] == '<') {
         salute += ltr;
        }
    }
    return salute;
}
