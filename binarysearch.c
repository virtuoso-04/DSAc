#include<stdio.h>

int binarysearch(int arr[], int low, int high, int key);

int main() {
    int i, n, x;
    printf("Enter the limit of the array: \n");
    scanf("%d", &n);
    printf("\nEnter the elements: \n");
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to be searched: \n");
    scanf("%d", &x);
    int result;
    result = binarysearch(arr, 0, n - 1, x);
    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result + 1);
    return 0;
}

int binarysearch(int arr[], int low, int high, int key) {
    int mid;
    if (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            return binarysearch(arr, mid + 1, high, key);
        else
            return binarysearch(arr, low, mid - 1, key);
    }
    return -1;
}
