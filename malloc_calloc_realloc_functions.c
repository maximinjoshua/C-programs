#include<stdio.h>
#include<stdlib.h>

void malloc_function(int n){
    int i;
    int *ptr = (int*)malloc(n*sizeof(int));
    if (ptr == NULL){
        printf("Memory cannot be allocated");
    }
    else{
        printf("\nEnter the elements to be stored\n");
        for(i=0; i<n ; i++){
            scanf("%d", ptr+i);
        }
        for(i=0; i<n ; i++){
            printf("%d ", *(ptr+i));
        }
    }
    free(ptr);
    ptr = NULL;//always a good practice to allocate the freed variable to NULL
}
void calloc_and_realloc_function(int n){
    int i;
    int *ptr = (int*)calloc(n, sizeof(int));
    if(ptr == NULL){
        printf("Memory cannot be allocated");
    }
    else{
        printf("\nEnter the elements to be stored\n");
        for(i=0; i<n ; i++){
            scanf("%d", ptr+i);
        }
        for(i=0; i<n ; i++){
            printf("%d ", *(ptr+i));
        }
    }
    ptr =  (int*)realloc(ptr, 2*n*sizeof(int));
    if(ptr == NULL){
        printf("Memory cannot be allocated");
    }
    else{
        printf("\nEnter the elements to be stored\n");
        for(i=n; i<2*n ; i++){
            scanf("%d", ptr+i);
        }
        for(i=0; i<2*n ; i++){
            printf("%d ", *(ptr+i));
        }
    }
    free(ptr);
    ptr = NULL;
}
void main(){
    int n;
    printf("Enter the no of elements");
    scanf("%d", &n);
    malloc_function(n);
    calloc_and_realloc_function(n);
}