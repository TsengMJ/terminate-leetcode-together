#include<stdio.h>
#include<stdlib.h>

void heapify(int* nums, int index, int numsSize);
int findKthLargest(int* nums, int numsSize, int k);

int main() {

    int k = 5;
    /*int nums[6] = { 3, 2, 1, 5, 6, 4 };*/
    /*int numsSize = 6;*/

    int nums[7] = {7,6,5,4,3,2,1};
    int numsSize = 7;

    int ans = findKthLargest(nums, numsSize, k);

    printf("%d\n", ans);

    return 0;
}


void heapify(int* nums, int index, int numsSize) {
    int largest_num_index = index;
    int left_index = 2 * largest_num_index + 1;
    int right_index = 2 * largest_num_index + 2;

    if (left_index < numsSize && *(nums + left_index) > *(nums + largest_num_index)) {
        largest_num_index = left_index;
    }

    if (right_index < numsSize && *(nums + right_index) > *(nums + largest_num_index)) {
        largest_num_index = right_index;
    }

    if (largest_num_index != index) {
        *(nums + index) = *(nums + index) - *(nums + largest_num_index);
        *(nums + largest_num_index) = *(nums + index) + *(nums + largest_num_index);
        *(nums + index) = *(nums + largest_num_index) - *(nums + index);

        heapify(nums, largest_num_index, numsSize);
    }
}

int findKthLargest(int* nums, int numsSize, int k){

    int first_index = 0;

    for (int i = numsSize / 2 + 1; i > -1; i -= 1)
        heapify(nums, i, numsSize);

    for (int i = 1; i < k; i += 1) {
        *nums = *nums - *(nums + numsSize - 1);
        *(nums + numsSize - 1) = *nums + *(nums + numsSize - 1);
        *nums = *(nums + numsSize - 1) - *nums;

        numsSize -= 1;

        heapify(nums, first_index, numsSize);
    }

    return *nums;
}
