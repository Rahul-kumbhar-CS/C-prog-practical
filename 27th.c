#include <stdio.h>

int main() {
    int arr[100], n, key, i, found = 0;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            printf("Element found at position %d.\n", i + 1);
            break;
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }

    return 0;
}