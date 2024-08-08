#include <stdio.h>

int main() {
    int size ; 
    scanf("%d",&size) ; 
    int array[size] ; 
    printf("Enter the array elements : \n") ;
    for (int i=0 ; i<size ; i++){
        scanf("%d",&array[i]) ; 
    }
    int max = 0, min = array[0] ; 
    for (int i=0 ; i<size ; i++){
        if (max<=array[i]){
            max = array[i] ;
        }
         if (min>=array[i]){
            min = array[i] ;
        } 
    }
    printf("The max : %d\nThe min : %d",max,min);
    
}
