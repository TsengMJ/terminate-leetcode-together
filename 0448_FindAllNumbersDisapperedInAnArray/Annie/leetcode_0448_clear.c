/**
 * 448. Find All Numbers Disappeared in an Array
 * Input : [4,3,2,7,8,2,3,1]
 * Output : [5,6]
 * 
 * Runtime: 92 ms, faster than 94.12% of C online submissions for Find All Numbers Disappeared in an Array.
 * Memory Usage: 18.5 MB, less than 100.00% of C online submissions for Find All Numbers Disappeared in an Array.
 * 
 * Note: The returned array must be malloced, assume caller calls free().
 * 
 * Refer: https://blog.csdn.net/yutianzuijin/article/details/53861485
 * sort
 * hash table
 * special : find and mark
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize){

    // find and mark
    *returnSize = numsSize;
    
    for(int i=0; i<numsSize; i++){
        //tmp_idx = abs(nums[i])-1;
        if(nums[abs(nums[i])-1]>0){
            nums[abs(nums[i])-1] *= -1;
            (*returnSize) --;
        }
    }
    
    // find the miss
    int* miss_arr = (int* )malloc(sizeof(int) * (*returnSize));
    int miss_idx = 0;
    for(int i=0; i<numsSize; i++){
        if(nums[i]>0){
            miss_arr[miss_idx] = i+1;
            miss_idx ++;  
        }
    }
    return miss_arr;
}