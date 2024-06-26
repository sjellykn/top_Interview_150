// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

// Example 1:
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]

#include <stdio.h>

void rotate(int* nums, int numsSize, int k) {
    int j = 0;
    for (int i = 0; i < numsSize; i++){
        // if (nums[k + 1] > numsSize){
        //     printf("Max profit is %d\n", k);
        //     break;
        // }
        j = nums[i];
        nums[i] = nums[numsSize - 1];
        // nums[k] = j;
        // k++;           
    }
    int m = 0;
    while (m < numsSize){
        printf("%d\n", nums[m]);
        m++;
    }
}

int main(){
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    rotate(nums, numsSize, 1);
    // printf("Max profit is %d\n", result);

    return 0;
}