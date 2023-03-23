//Jonathan Vega
//Lab Assignmnet # 7
//3/22/2023
#include <stdio.h>

int main() {
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int size  = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp, swaps;

    for (i = 0; i < size - 1; i++) {
        swaps = 0;

        for (j = 0; j < size - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                temp       = arr[j];
                arr[j]     = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }

        printf("Index #%d: %d\n", i + 1, swaps);
        if (swaps == 0) {

            break;
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}