// Given a string s consisting of words and spaces, return the length of the last word in the string.
// A word is a maximal substring consisting of non-space characters only.

// Example 1:

// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5.
// Example 2:

// Input: s = "   fly me   to   the moon  "
// Output: 4
// Explanation: The last word is "moon" with length 4.
// Example 3:

// Input: s = "luffy is still joyboy"
// Output: 6
// Explanation: The last word is "joyboy" with length 6.

#include <stdio.h>

int lengthOfLastWord(char* s) {
    int result = 0;
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] != ' ') {
            j++;
            result = j;
        }
        else
            j = 0;
    }

    return (result);
}

int main() {
    char nums[] = "   fly me   to   the moon  ";

    int result = lengthOfLastWord(nums);
    printf("Length is %d\n", result);

    return 0;
}