#include<stdio.h>
void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[],int start, int end){
    int pivot = arr[end];
    int partition_index = start;
    for(int i=start; i<end; i++){
        if(arr[i]<pivot){
            swap(&arr[i], &arr[partition_index]);
            partition_index += 1;
        }
    }
    swap(&arr[partition_index], &arr[end]);
    // printf("%d", partition_index);
    return partition_index;
}
void Quicksort(int arr[], int start, int end){
    if(start<end){
        int partition_index = partition(arr ,start, end);
        Quicksort(arr, start, partition_index-1);
        Quicksort(arr, partition_index+1, end);
    }
}
void main(){
    int arr[] = {6,8,2,4,1,9,0,3};
    int start = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    int end = n-1;
    Quicksort(arr, start, end);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}