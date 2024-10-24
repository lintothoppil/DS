#include <stdio.h>

int linearSearch,arr[],size,target;  

int main() {
    int size, target;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];



int linearSearch(int arr[], int size, int target);

int main() {
    int size, target;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];


    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Enter the target element to search: ");
    scanf("%d", &target);


    int result = linearSearch(arr, size, target);


    if (result == -1) {
        printf("Element not found in the array.\n");
    } else {
        printf("Element found at index %d.\n", result);
    }

    return 0;
}


int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1;  
}
f the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Enter the target element to search: ");
    scanf("%d", &target);


    int result = linearSearch(arr, size, target);


    if (result == -1) {
        printf("Element not found in the array.\n");
    } else {
        printf("Element found at index %d.\n", result);
    }

    return 0;
}


int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  
        }
    }
    return -1;  
}

