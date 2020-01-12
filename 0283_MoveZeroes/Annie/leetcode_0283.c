/*
 * Problem 283. Move Zeroes
 * Given an array nums, 
 * write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
 *
 * Example :
 * Input: [0,1,0,3,12]
 * Output: [1,3,12,0,0]
 * 
 * Note :
 * 1. You must do this in-place without making a copy of the array.
 * 2. Minimize the total number of operations.
 * 
 * Runtime: 12 ms, faster than 91.95% of C online submissions for Move Zeroes.
 * Memory Usage: 8.9 MB, less than 80.00% of C online submissions for Move Zeroes.
 */

void moveZeroes(int* nums, int numsSize){
    printf("numsSize %d\n", numsSize);
    int CountNoZero = 0;
    for(int i = 0; i<numsSize; i++){
        if(nums[i] != 0){
            nums[CountNoZero] = nums[i];
            CountNoZero ++;
        }
    }
    for(int j=CountNoZero; j<numsSize; j++){
        nums[j] = 0;
    }
    
}