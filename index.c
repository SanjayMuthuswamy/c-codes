#include <stdio.h>

int main() {
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the Array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Array to keep track of whether an element has been counted
    int counted[size];
    for (int i = 0; i < size; i++) {
        counted[i] = 0;  // Initialize counted array with 0
    }

    printf("Number - Occurrences\n");
    for (int i = 0; i < size; i++) {
        if (counted[i] == 0) {  // Only count if this element hasn't been counted yet
            int count = 1;
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    counted[j] = 1;  // Mark this element as counted
                }
            }
            printf("%d - %d\n", arr[i], count);
        }
    }
    
    return 0;
}
