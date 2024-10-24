#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

       
        if (arr[mid] == target)
            return mid;

       
        if (arr[mid] < target)
            left = mid + 1;
        
        else
            right = mid - 1;
    }

   
    return -1;
}

int main() {
    int size, target;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

   
    printf("Enter %d elements in sorted order:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the target element to search: ");
    scanf("%d", &target);

    
    int result = binarySearch(arr, size, target);
    if (result == -1)
        printf("Element not found in the array.\n");
    else
        printf("Element found at index %d.\n", result+1);

    return 0;
}

