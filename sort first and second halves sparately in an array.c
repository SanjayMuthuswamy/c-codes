#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int mid = size / 2; 
    if (mid % 2 == 1) {
        mid += 1;  // Correct the mid value if it's odd
    }

    printf("Sorting the first half of the array in ascending order...\n");
    int temp; 
    for (int i = 0; i <= mid; i++) {
        for (int j = 0; j <= mid; j++) {
            if (arr[i] < arr[j]) {
                // Swap
                temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            }
        }
    }

    printf("Sorting the second half of the array in descending order...\n");
    for (int i = mid + 1; i < size; i++) {
        for (int j = mid + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                // Swap
                temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            }
        }
    }

    printf("Final sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
