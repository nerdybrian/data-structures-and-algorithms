#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int nums[], int numsSize) {
    if (numsSize == 0) {
        return 0; // Empty array, no duplicates to remove
    }

    int uniqueCount = 1; // Initialize with the first element (it's always unique)

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            // Found a new unique element
            nums[uniqueCount] = nums[i];
            uniqueCount++;
        }
    }

    return uniqueCount;
}

int main() {
    int nums[] = {1, 1, 2, 2, 3, 3, 4, 5, 5, 5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    // Print the original array
    printf("Original Array: ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    // Remove duplicates in-place
    int newLength = removeDuplicates(nums, numsSize);

    // Print the modified array and the new length
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newLength; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    printf("New Length: %d\n", newLength);

    return 0;
}
