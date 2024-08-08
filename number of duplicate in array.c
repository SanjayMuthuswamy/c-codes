#include <stdio.h>
int dup(int a[] , int size){
     for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    
    int count = 0; 
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] == a[j]) {
                count++;
                break;  
            }
        }
    }
    return count ;
}
int main() {
    int size ;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int a[size];
    printf("Enter %d elements: ", size);
     
    printf("Number of duplicate elements: %d\n",  dup(a , size));
    
    return 0;
}