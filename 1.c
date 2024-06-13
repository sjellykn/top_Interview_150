// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. 
// The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

// Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the 
// following things:

// Change the array nums such that the first k elements of nums contain the elements which are not equal to val. 
// The remaining elements of nums are not important as well as the size of nums.
// Return k.

#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
    int k = 0;
    int j = 0;
    for (int i = 0; i < numsSize; i++) { 
        j = i;
        while (nums[i] == val){ 
            if(j == numsSize - 1)
                break;
            j++;                      
            nums[i] = nums[j];  
            nums[j] = val;  
            
        }  
        if (nums[i] != val)
            k++;           
        
        printf("%d nn\n", nums[i]);
    }
    return k;
}

int main () {
    int numsSize = 5;
    int nums[5] = {0, 2, 2, 3, 4};

    
    int val = 2;
    int k = 0;
    k = removeElement(nums, numsSize, val);
    printf("%d\n", k);


}