string Solution::solve(int A) {
    if (A>=3 && A <=5) {
        return "Spring";
    }
    else if (A>=6 && A<=8) {
        return "Summer";
    }
    else if (A>=9 && A<=11) {
        return "Autumn";
    }
    else if ((A>=1 && A<=2) || A==12) {
        return "Winter";
    }
    else {
        return "Invalid";
    }
}
