// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place 
// such that each unique element appears only once. The relative order of the elements should 
// be kept the same. Then return the number of unique elements in nums.

// Consider the number of unique elements of nums to be k, to get accepted, you need to do 
// the following things:

// Change the array nums such that the first k elements of nums contain the unique elements 
// in the order they were present in nums initially. The remaining elements of nums are not 
// important as well as the size of nums.
// Return k.

#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    int k = 0;
    int i = 0;

    while (i < numsSize){
        if (i + 1 < numsSize && nums[i] == nums[i + 1]) {
            i++;
        }
        else {
            
            nums[k] = nums[i];
            k++;      
            i++;
        }
    }
    return k;
}

int main () {
    int numsSize = 10;
    int nums[10] = {0,0,1,1,1,2,2,3,3,4};

    int k = 0;
    k = removeDuplicates(nums, numsSize);
    printf("%d kkk\n", k);
}