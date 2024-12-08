#include <stdio.h>

int main() {
    int n,x,arr[10],i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element to search: ");
    scanf("%d", &x);


    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2; // Calculate mid directly

        if (arr[mid] == x) {
            printf("Element found at index %d.\n", mid + 1); // 1-based index
            return 0; // Exit the program as we found the target
        }

        if (arr[mid] < x) {
            left = mid + 1; // Adjust left boundary
        } else {
            right = mid - 1; // Adjust right boundary
        }
    }

    // If we exit the loop without finding the element
    printf("Element not found in the array.\n");

    return 0;
}
