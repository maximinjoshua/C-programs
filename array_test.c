#include<stdio.h>

void main(){
    int i ,arr[5]={1,2,3,4,5};
    arr[0] = 4;
    for(i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    
}