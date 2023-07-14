#include <stdio.h>

int findUniqueNumber(const int* arr, int size) {
    int uniqueNum = 0;

    for (int i = 0; i < size; i++) {
        uniqueNum ^= arr[i];
    }

    return uniqueNum;
}

int main() {
    int arr1[7] = {4, 2, 5, 2, 5, 7, 4};
    int uniqueNum1 = findUniqueNumber(arr1, 7);
    printf("Input: {4, 2, 5, 2, 5, 7, 4}\n");
    printf("Output: %d\n", uniqueNum1);

    int arr2[3] = {4, 2, 4};
    int uniqueNum2 = findUniqueNumber(arr2, 3);
    printf("Input: {4, 2, 4}\n");
    printf("Output: %d\n", uniqueNum2);

    return 0;
}
