/*
 * 169. Majority Element
 *
 * Given an array of size n, find the majority element. 
 * The majority element is the element that appears more than ⌊ n/2 ⌋ times.
 *
 * Input: [3,2,3]
 * Output: 3
 *
 * Runtime: 16 ms, faster than 95.55% of C online submissions for Majority Element.
 * Memory Usage: 8.9 MB, less than 100.00% of C online submissions for Majority Element.
 */


int majorityElement(int* nums, int numsSize){
    int value = 0;
    int count = 0;
    for(int i=0; i<numsSize; i++){
        if(count == 0){
            value = nums[i];
            count ++;
        }
        else{
            if(value == nums[i]){
                count ++;
            }
            else{
                count --;
            }
        }
    }
    return value;
}

