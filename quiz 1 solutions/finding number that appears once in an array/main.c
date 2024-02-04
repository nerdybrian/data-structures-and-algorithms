#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int singleNumber(int nums[], int numsSize) {
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];
    }

    return result;
}

int main() {
    int nums[] = {4, 2, 3, 2, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    // Print the original array
    printf("Original Array: ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    // Find the single number using XOR
    int result = singleNumber(nums, numsSize);

    // Print the result
    printf("The single number is: %d\n", result);

    return 0;
}

