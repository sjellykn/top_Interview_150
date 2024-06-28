// There is a function signFunc(x) that returns:
// 1 if x is positive.
// -1 if x is negative.
// 0 if x is equal to 0.
// You are given an integer array nums. Let product be the product of all values in the array nums.
// Return signFunc(product).

// Example 1:
// Input: nums = [-1,-2,-3,-4,3,2,1]
// Output: 1
// Explanation: The product of all values in the array is 144, and signFunc(144) = 1

#include <stdio.h>

int arraySign(int* nums, int numsSize) {
    int sign  = 1;
    for (int i = 0; i < numsSize; i++){
        if (nums[i] == 0)
            return(0);
        else if (nums[i] < 0) {
            sign = -sign;
        }
    }
    return sign;
}

int main() {
    int nums[] = {9,72,34,29,-49,-22,-77,-17,-66,-75,-44,-30,-24};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = arraySign(nums, numsSize);
    printf("Output: %d\n", result);

    return 0;
}
