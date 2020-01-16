#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int majorityElement(int* nums, int numsSize);

int main() {

    // fail when input = [2147483647]
    int nums[] = {2,2,1,1,1,2,2};
    int numsSize = 7;

    int answer = majorityElement(nums, numsSize);

    printf("%d\n", answer);

    return 0;
}

int majorityElement(int* nums, int numsSize) {

    int max = 0;
    int max_count = 0;
    int max_index = 0;
    /*int tmp = 0;*/
    int *array;

    /*int majority = floor(numsSize / 2);*/

    for (int i = 0; i < numsSize; i += 1) {
        if (abs(nums[i]) > max) {
            max = abs(nums[i]);
        }
    }

    /*array = (int*)calloc(max, sizeof(int));*/
    array = (int*)malloc(sizeof(int) * (2 * max + 1));

    for (int i = 0; i < (2 * max + 1); i += 1) {
        array[i] = 0;
    }

    for (int i = 0; i < numsSize; i += 1) {

        /*printf("%d\n", nums[i]);*/
        /*printf("%d\n", array[nums[i]]);*/

        array[nums[i] + max] += 1;

        if (array[nums[i] + max] > max_count) {
            max_count = (array[nums[i] + max]);
            max_index = nums[i];
        }
    }

    return max_index;

}
