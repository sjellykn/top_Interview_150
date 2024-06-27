// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the 
// original letters exactly once.

// Example 1:
// Input: s = "anagram", t = "nagaram"
// Output: true

// Example 2:
// Input: s = "rat", t = "car"
// Output: false

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char* s, char* t) {
    if (strlen(t) != strlen(s))
        return false;
    for (int i = 0; s[i] != '\0'; i++){
        int j = 0;
        while (t[j] != s[i] && t[j] != '\0')
            j++;
        if (t[j] != s[i])
            return false;
        if (t[j] == s[i])
            t[j] = '0';
    }
    return true;
}

int main (){
    char s1[] = "anagram";
    char t1[] = "nagaram";
    printf("Example 1: %s\n", isAnagram(s1, t1) ? "true" : "false");
}