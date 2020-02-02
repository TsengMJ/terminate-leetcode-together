/**
 * 448. Find All Numbers Disappeared in an Array
 * Input : [4,3,2,7,8,2,3,1]
 * Output : [5,6]
 * 
 * Runtime: 96 ms, faster than 82.35% of C online submissions for Find All Numbers Disappeared in an Array.
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

    int tmp;
    int tmp_idx;
    int* miss_count = (int* ) malloc(sizeof(int));
    int tmp_count = numsSize;
    
    for(int i=0; i<numsSize; i++){
        //printf("nums[%d] = %d\n",i,nums[i]);
        tmp = abs(nums[i]);
        //printf("tmp %d\n",tmp);
        tmp_idx = tmp-1;
        //printf("tmp_idx %d\n", tmp_idx);
        if(nums[tmp_idx]>0){
            nums[tmp_idx] = -nums[tmp_idx];
            tmp_count --;
            //printf("remark %d\n", nums[tmp_idx]);
        }
        
    }
    
    //*miss_count = tmp_count;
    //printf("miss %d numbers\n",*miss_count);
    *returnSize = tmp_count;
    //printf("returnSize %d\n",*returnSize);
    
        
    // printf for check
    /*
    for(int i=0; i<numsSize; i++){
        printf("nums[%d] = %d\n",i,nums[i]);;
    }
    */
    
    // find the miss
    int* miss_arr = (int* )malloc(sizeof(int) * tmp_count);
    int miss_num;
    int miss_tmp_count = 0;
    for(int i=0; i<numsSize; i++){
        if(nums[i]>0){
            miss_num = i+1;
            miss_arr[miss_tmp_count] = miss_num;
            //printf("miss_arr[%d]=%d\n",miss_tmp_count,miss_arr[miss_tmp_count]);
            miss_tmp_count ++;
            
        }
    }
    /*
    printf("returnSize %d\n",*returnSize);
    for(int i=0; i<*returnSize; i++){
        printf("miss_arr[%d] = %d\n",i,miss_arr[i]);;
    }
    */
    return miss_arr;
}

