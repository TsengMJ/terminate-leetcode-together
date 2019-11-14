#include <stdio.h>
#include <stdlib.h>

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize);

int main() {

    int returnSize = 0;
    int nums1[] = {1,2,2,1};
    int nums2[] = {2,2};
    int nums1Size = 4;
    int nums2Size = 2;

    int* ans = intersection(nums1, nums1Size, nums2, nums2Size, &returnSize);

    for (int i = 0; i < returnSize; i += 1) {
        printf("%d\t", ans[i]);
    }

    printf("\n");

    return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){

    int max_num = -2147483647;
    int hash_len = 0;
    int i, j, count;
    int num1, num2;
    int *hash_num1_arr, *hash_num2_arr, *answer_arr;

    if (nums1Size == 0 && nums2Size == 0) {
        *returnSize = 0;
        answer_arr = (int*)malloc(sizeof(int)*(*returnSize));
        return answer_arr;
    }


    for (i = 0, j = 0; i < nums1Size || j < nums2Size;) {

        if (i < nums1Size){
            if (nums1[i] > max_num) {
                max_num = nums1[i];
            }
            i += 1;
        }
        if (j < nums2Size) {
            if (nums2[j] > max_num) {
                max_num = nums2[j];
            }
            j += 1;
        }
    }

    hash_len = max_num += 1;

    hash_num1_arr = (int*)calloc(hash_len, sizeof(int));
    hash_num2_arr = (int*)calloc(hash_len, sizeof(int));

    for (i = 0; i < hash_len; i += 1) {
        hash_num1_arr[i] = -1;
        hash_num2_arr[i] = -1;
    }

    count = 0;
    for (i = 0, j = 0; i < nums1Size || j < nums2Size;) {


        if (i < nums1Size) {
            num1 = nums1[i];
            hash_num1_arr[num1] += 1;
            i += 1;
        }

        if (j < nums2Size) {
            num2 = nums2[j];
            hash_num2_arr[num2] += 1;
            j += 1;
        }
    }

    for (i = 0; i < hash_len; i += 1) {
        if (hash_num1_arr[i] != -1 && hash_num2_arr[i] != -1)
            count += 1;
    }

    *returnSize = count;

    answer_arr = (int*)calloc(count, sizeof(int));

    /*for (i = 0; i < count; i += 1)*/
        /*answer_arr = 0;*/

    for (i = 0; i < hash_len; i += 1) {
        if (hash_num1_arr[i] != -1 && hash_num2_arr[i] != -1) {
            answer_arr[count-1] = i;
            count -= 1;
        }
    }

    return answer_arr;
}
