#include <stdio.h>

int main(){
    int value = 10;
    int* ptr1 = &value;
    int** ptr2 = &ptr1 ;
    int*** ptr3 = &ptr2 ;
    printf("value : %d \n", value);
    printf("pointer 1: %p   %d\n", ptr1, *ptr1);
    printf("pointer 2: %p %p %d\n", ptr2, *ptr2, **ptr2);
    printf("pointer 3: %p %p %p %d\n", ptr3, *ptr3, **ptr3, ***ptr3);

}