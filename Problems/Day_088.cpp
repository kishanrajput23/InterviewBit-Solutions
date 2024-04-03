string Solution::intToRoman(int A) {
    string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        string romanNumeral = "";

        for (int i = 0; i < 13; i++) {
            while (A >= values[i]) {
                A -= values[i];
                romanNumeral += roman[i];
            }
        }

        return romanNumeral;
}
