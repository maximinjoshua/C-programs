#include<stdio.h>
int main(){
    int arr[] = {4,6,2,7,3};
    int value;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1 ; i<n ; i++){
        value = arr[i];
        while(i>0 && arr[i-1]>value){
            arr[i] = arr[i-1];
            i = i-1;
        } 
        arr[i] = value;
    }
    for(int i=0 ; i<n ; i++){
        printf("%d ", arr[i]);
    }
}