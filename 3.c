// Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place 
// such that each unique element appears at most twice. The relative order of the elements should 
// be kept the same.

// Since it is impossible to change the length of the array in some languages, you must instead 
// have the result be placed in the first part of the array nums. More formally, if there are k 
// elements after removing the duplicates, then the first k elements of nums should hold the final 
// result. It does not matter what you leave beyond the first k elements.

// Return k after placing the final result in the first k slots of nums.

#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    int i = 0;
    int k = 0;
    while (i < numsSize) {
        if (i + 2 < numsSize && nums[i] == nums[i + 2])
            i++;
        else {
            nums[k] = nums[i];
            k++;      
            i++;
        }
    }
    int j = 0;
    while (j < numsSize){
        printf("%d\n", nums[j]);
        j++;
    }
    return k;
}

int main () {
    int numsSize = 2;
    int nums[2] = {0,1};

    int k = 0;
    k = removeDuplicates(nums, numsSize);
    printf("%d kkk\n", k);


}