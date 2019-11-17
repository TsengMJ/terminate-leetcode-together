#include "stdio.h"
#include "stdlib.h"

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main() {

    int numsSize = 4;
    int nums[4] = {2,7,11,15};
    int target = 9;
    int size = 0;
    int *returnSize = &size;

    int *answer = twoSum(nums, numsSize, target, returnSize);

    for (int i = 0; i < *returnSize; i += 1) {
        printf("%d \t", answer[i]);
    }

    return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int counter_x, counter_y;
    int temp;
    int *answer = (int*)malloc((*returnSize)*sizeof(int));

    for (counter_x = 0; counter_x < numsSize-1; counter_x += 1) {
        for (counter_y = counter_x+1; counter_y < numsSize; counter_y += 1) {
            temp = nums[counter_x] + nums[counter_y];
            if (temp == target) {
                answer[0] = counter_x;
                answer[1] = counter_y;
                break;
            }

        }
    }
    return answer;
}
