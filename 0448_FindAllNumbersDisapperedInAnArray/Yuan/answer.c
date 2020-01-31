#include <stdio.h>
#include <stdlib.h>


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize);

int main() {

    int test[8] = {4,3,2,7,8,2,3,1};
    int returnSize = 8;
    int *answer;

    answer = (int*)calloc(8, sizeof(int));

    answer = findDisappearedNumbers(test, 8, &returnSize);

    return 0;
}

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {

    int index = 0;
    int *ans;
    int tmp;

    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i += 1) {
        index = abs(nums[i]) - 1;

        if (nums[index] > 0) {
            nums[index] = -nums[index];
            *returnSize -= 1;
        }
    }

    ans = (int*)calloc(*returnSize, sizeof(int));
    tmp = *returnSize - 1;

    for (int i = 0; i < numsSize; i += 1) {
        if (nums[i] > 0) {
            ans[tmp] = i + 1;
            tmp -= 1;
        }
    }

    return ans;

}
