// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

// Example 1:
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

// Example 2:
// Input: nums = [0]
// Output: [0]

#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int j = 0;
    for (int i = 0; i < numsSize; i++){
        if (nums[i] == 0)
            j++;
        if(nums[i] != 0){
            nums[i - j] = nums[i];
            if(j != 0)
                nums[i] = 0;
        }
        if (j >= numsSize - i)
            nums[i] = 0;
    }
}

int main () {
    int numsSize = 3;
    int nums[5] = {0, 1, 0};

    moveZeroes(nums, numsSize);
    
    for (int i = 0; i < numsSize; i++) { 
        printf("%d\n", nums[i]);
    }
}