// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. 
// You may assume that the majority element always exists in the array.

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

#include <stdio.h>

int majorityElement(int* nums, int numsSize) {
    int count = 0;
    int condidate = 0;
    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
            condidate = nums[i];
        }
        count += (nums[i] == condidate) ? 1 : -1;
    }
    return (condidate);
}

int main() {
    int nums[] = {6, 5, 5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = majorityElement(nums, numsSize);
    printf("The majority element is %d\n", result);

    return 0;
}