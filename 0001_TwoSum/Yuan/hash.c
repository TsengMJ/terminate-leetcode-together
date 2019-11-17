#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main()
{

    /*int numsSize = 4;*/
    /*int nums[4] = {0, 4, 3, 0};*/
    /*int target = 0;*/
    /*int nums[4] = {1, 7, 9, 11};*/
    /*int target = 16;*/
    /*int nums[4] = {2, 7, 11, 15};*/
    /*int target = 9;*/

    int numsSize = 3;
    int nums[3] = { 3, 2, 4 };
    int target = 6;

    int size = 0;
    // initialize pointer
    int* returnSize = &size;

    int* answer = twoSum(nums, numsSize, target, returnSize);

    for (int i = 0; i < *returnSize; i += 1) {
        printf("%d \t", answer[i]);
    }

    return 0;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    *returnSize = 2;
    int min = 2147483647;
    int max = 0;
    int i = 0;

    for (i = 0; i < numsSize; i += 1) {
        if (nums[i] < min) {
            min = nums[i];
        }

        if (nums[i] > max) {
            max = nums[i];
        }
    }

    // find the max difference
    if (max < target - min) {
        max = target - min;
    }
    int len = max - min + 1;

    int* table = (int*)malloc(len * sizeof(int));
    int* answer = (int*)(malloc)(2 * sizeof(int));

    for (i = 0; i < len; i += 1) {
        table[i] = -1;
    }

    for (i = 0; i < numsSize; i += 1) {
        // the difference needs to be less than the len and higher then or equal 0
        // eg target == 0
        if (target - nums[i] - min < len && target - nums[i] - min >= 0) {
            if (table[target - nums[i] - min] != -1) {
                answer[0] = table[target - nums[i] - min];
                answer[1] = i;
                break;
            }
            table[nums[i] - min] = i;
        }
    }

    free(table);

    return answer;
}
