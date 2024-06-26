// You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. 
// If a string is longer than the other, append the additional letters onto the end of the merged string.
// Return the merged string.

// Example 1:

// Input: word1 = "abc", word2 = "pqr"
// Output: "apbqcr"
// Explanation: The merged string will be merged as so:
// word1:  a   b   c
// word2:    p   q   r
// merged: a p b q c r

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * mergeAlternately(char * word1, char * word2){
    char *result = (char *)malloc((strlen(word1) + strlen(word2) + 1) * sizeof(char));
    int i = 0;
    while(*word1 != '\0' || *word2 != '\0'){
        if (*word1 != '\0'){
            result[i] = *word1;
            word1++; i++;
        }
        if (*word2 != '\0'){
            result[i] = *word2;
            word2++; i++;
        }
    }
    result[i] = '\0';
    return(result);
}

int main (){
    char * word1 = "abc";
    char * word2 = "pqrllll";
    char * word3 = mergeAlternately(word1, word2);

    int m = 0;
    while (word3[m] != '\0'){
        printf("%c\n", word3[m]);
        m++;
    }

}