#include<stdio.h>

void SelectionSort(int arr[], int n){
    for(int i=0 ; i<n-1 ; i++ ){
        int min = i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        int temp = arr[i];
        arr[i]  = arr[min];
        arr[min] = temp;
        }
    }
}

void main(){
    int arr[] = {4,2,6,7,1};
    int arraylength = sizeof(arr)/sizeof(int);
    // printf("%d\n", arraylength);
    SelectionSort(arr, arraylength);
    for(int i=0; i<arraylength; i++){
        printf("%d\n", arr[i]);
    }
}
