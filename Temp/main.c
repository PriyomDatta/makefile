#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory using malloc
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize the array
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Print the array
    printf("Array elements (malloc): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Dynamically allocate memory using calloc
    int *carr = (int *)calloc(n, sizeof(int));
    if (carr == NULL) {
        printf("Memory allocation failed!\n");
        free(arr);
        return 1;
    }

    // Initialize the array
    for (int i = 0; i < n; i++) {
        carr[i] = i + 1;
    }

    // Print the array
    printf("Array elements (calloc): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", carr[i]);
    }
    printf("\n");

    // Reallocate memory using realloc
    int new_size = n * 2;
    int *rarr = (int *)realloc(arr, new_size * sizeof(int));
    if (rarr == NULL) {
        printf("Memory reallocation failed!\n");
        free(carr);
        return 1;
    }

    // Initialize the new elements
    for (int i = n; i < new_size; i++) {
        rarr[i] = i + 1;
    }

    // Print the array
    printf("Array elements after realloc: ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", rarr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(carr);
    free(rarr);

    return 0;
}
