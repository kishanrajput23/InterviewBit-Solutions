int Solution::solve(string A) {
    int flag1 = 0;
    int flag2 = 0;
    int flag3 = 0;
    int flag4 = 0;
    int flag5 = 0;

    if(A.length()>=8 && A.length()<=15) {
        flag2 = 1;
    }

    for(int i=0; i<A.length(); i++) {
        if (A[i]>='0' && A[i]<='9') {
            flag1 = 1;
        }
        
        if ((A[i])>='a' && (A[i])<='z') {
            flag3 = 1;
        }
        
        if ((A[i])>='A' && (A[i])<='Z') {
            flag4 = 1;
        }
        
        if (A[i]=='@' || A[i]=='#' || A[i]=='%' || A[i]=='&' || A[i]=='!' || A[i]=='$' || A[i]=='*') {
            flag5 = 1;
        }
    }
    
    if (flag1 == 1 && flag2 == 1 && flag3 == 1 && flag4 == 1 && flag5 == 1) {
        return 1;
    }
    else {
        return 0;
    }
}
