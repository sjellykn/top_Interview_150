// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// For example, 2 is written as II in Roman numeral, just two ones added together. 
// 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, 
// which is XX + V + II.

// Roman numerals are usually written largest to smallest from left to right. However, 
// the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it 
// making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

// I can be placed before V (5) and X (10) to make 4 and 9. 
// X can be placed before L (50) and C (100) to make 40 and 90. 
// C can be placed before D (500) and M (1000) to make 400 and 900.
// Given a roman numeral, convert it to an integer.

#include <stdio.h>

int romanToInt(char* s) {
    int result = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'I' && s[i + 1] != 'V' && s[i + 1] != 'X')
            result += 1;
        else if (s[i] == 'I')
            result -= 1;
        if (s[i] == 'V')
            result += 5;
        if (s[i] == 'X' && s[i + 1] != 'L' && s[i + 1] != 'C')
            result += 10;
        else if (s[i] == 'X')
            result -= 10;
        if (s[i] == 'L')
            result += 50;
        if (s[i] == 'C' && s[i + 1] != 'D' && s[i + 1] != 'M')
            result += 100;
        else if(s[i] == 'C')
            result -= 100;
        if (s[i] == 'D')
            result += 500;
        if (s[i] == 'M')
            result += 1000;
    }
    return(result);
}

int main() {
    char nums[] = "MCMXCIV";

    int result = romanToInt(nums);
    printf("Number is %d\n", result);

    return 0;
}
