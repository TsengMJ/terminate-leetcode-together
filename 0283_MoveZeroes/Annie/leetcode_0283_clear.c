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
 * Runtime: 8 ms, faster than 98.66% of C online submissions for Move Zeroes.
 * Memory Usage: 8.9 MB, less than 100.00% of C online submissions for Move Zeroes.
 */

void moveZeroes(int* nums, int numsSize){
    int CountNoZero = 0;
    for(int i = 0; i<numsSize; i++){
        if(nums[i] != 0){
            /*
            nums[CountNoZero] = nums[i];
            nums[i] = 0;
            // fail : input [1]
            */
            int tmp = nums[CountNoZero];
            nums[CountNoZero] = nums[i];
            nums[i] = tmp;
            CountNoZero ++;
        }
    }    
}
