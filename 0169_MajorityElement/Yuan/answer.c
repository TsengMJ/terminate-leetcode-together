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

    int **array = (int**)malloc(sizeof(int *) * numsSize);
    int flag = 0;

    int index = 0;
    int cur = 0;
    int max = 0;

    for (int i = 0 ; i < numsSize; i += 1) {
        array[i] = (int *)calloc(2, sizeof(int));
    }

    for (int i = 0; i < numsSize; i += 1) {

        flag = 0;

        for (cur = 0; cur < index; cur += 1) {
            if (array[cur][0] == nums[i])
                flag = 1;
            if (flag == 1)
                break;
        }

        if (flag == 0) {
            array[index][0] = nums[i];
            array[index][1] += 1;

            index += 1;
        }

        if (flag == 1) {
            array[cur][1] += 1;
        }

    }

    for (int i = 0; i < numsSize; i += 1) {
        if (array[i][1] > max) {
            max = array[i][1];
            index = array[i][0];
        }
    }

    return index;
}
