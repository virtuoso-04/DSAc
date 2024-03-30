#include <stdio.h>
#include <stdlib.h>

void findMinMax(int *arr, int size, int *min, int *max) {
    *min = *max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}
int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    int *arr = (int *)malloc(N * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; ++i)
        scanf("%d", &arr[i]);

    int min, max;
    findMinMax(arr, N, &min, &max);

    printf("Smallest number: %d\n", min);
    printf("Largest number: %d\n", max);

    free(arr);
    return 0;
}
