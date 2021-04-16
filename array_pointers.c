#include<stdio.h>

void main(){
    int a[] = {1,2,3,4,5,6};
    //This pointer points to the first element in the array
    int* ptr = a;
    for(int i=0 ; i<=5 ; i++){
        printf("%d\n", *(ptr+i));
    }
    printf("=====");
    //This pointer points to the whole array
    int (*ptr1)[10] = &a;
    for(int i=0; i<=5; i++){
        printf("%d\n", *(*ptr1+i));
    }
}