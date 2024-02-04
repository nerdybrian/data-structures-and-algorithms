#include <stdio.h>

#include <stdio.h>
#include <stdbool.h>

void printArray(int nums[], int numsSize) {
    printf("Array: ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

bool containsDuplicate(int nums[], int numsSize) {
    int hashSet[100000] = {0};

    for (int i = 0; i < numsSize; i++) {
        if (hashSet[nums[i] + 50000] == 1) {
            // Duplicate found
            return true;
        }

        hashSet[nums[i] + 50000] = 1;
    }

    // No duplicates found
    return false;
}

int main() {
    int nums1[] = {1, 2, 3, 4, 5};
    int nums2[] = {1, 2, 3, 4, 1};

    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);

    // Print and check for duplicates in nums1
    printArray(nums1, numsSize1);
    bool result1 = containsDuplicate(nums1, numsSize1);
    printf("Array 1: %s\n", result1 ? "Contains duplicates" : "No duplicates");
    printf("\n");

    // Print and check for duplicates in nums2
    printArray(nums2, numsSize2);
    bool result2 = containsDuplicate(nums2, numsSize2);
    printf("Array 2: %s\n", result2 ? "Contains duplicates" : "No duplicates");

    return 0;
}

