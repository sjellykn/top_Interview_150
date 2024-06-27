// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle 
// is not part of haystack.

// Example 1:
// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.

// Example 2:
// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we return -1.

#include <stdio.h>
#include <string.h>

int strStr(char* haystack, char* needle) {
    int needle_len = strlen(needle);
    int haystack_len = strlen(haystack);

    if (needle_len > haystack_len) {
        return -1;
    }
    for (int i = 0; i <= haystack_len - needle_len; i++){
        int j = 0;
        while (j < needle_len && needle[j] == haystack[i + j])
            j++;
        if (j == needle_len)
            return i;
    }
    return (-1);
}

int main (){
    char * haystack = "mississippi";
    char * needle = "issip";
    int result = strStr(haystack, needle);
    printf("%d\n", result);
}