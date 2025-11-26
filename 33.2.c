//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, key;

    // Input size of array
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n + 1]; // +1 for new element

    // Input sorted array elements
    printf("Enter %d elements in ascending order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Find the correct position to insert
    int i;
    for (i = n - 1; i >= 0 && arr[i] > key; i--) {
        arr[i + 1] = arr[i]; // Shift elements to right
    }

    arr[i + 1] = key; // Insert element
    n++; // Increase size

    // Print the updated array
    printf("Array after insertion:\n");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
