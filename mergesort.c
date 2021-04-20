#include<stdio.h>
void merge(int left[], int right[], int arr[],int lenleft,int lenright){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<lenleft && j<lenright){
        if(left[i]<=right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
        }
    while(i<lenleft){
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j<lenright){
        arr[k] = right[j];
        j++;
        k++;
    }
}
void mergesort(int arr[], int n){
    if(n<2){
        return;
    }
    // printf("%d\n",n);
    int mid = n/2;
    int left[n/2] , right[n-(n/2)];
    // printf("%d\n", sizeof(left));
    // printf("%d\n",sizeof(right));
    for(int i=0; i<mid; i++){
        left[i]=arr[i];
    }
    for(int i=mid; i<n; i++){
        right[i-mid] = arr[i];
    }
    int lenleft = sizeof(left)/sizeof(left[0]);
    int lenright = sizeof(right)/sizeof(right[0]);
    // for(int i=0; i<lenleft; i++){
    //     printf("%d ", left[i]);
    // }
    // printf("\n");
    // for(int i=0; i<lenright; i++){
    //     printf("%d ", right[i]);
    // }
    // printf("\n");
    // printf("=====\n");
    mergesort(left, lenleft);
    mergesort(right, lenright);
    merge(left, right, arr, lenleft, lenright);
}


void main(){
    int arr[] = {4,7,8,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr, n);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}