#include<stdio.h>
void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int arr[] = {3,1,8,4,9,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0 ; i<n-1 ; i++){
        //(n-2) because (n-1) is the last element and A[j+1] will cause outofbounds error
        //(n-i-2) because the array will be sorted at the end at the end of each iteration of i
        for(int j=0 ; j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
    for(int i=0; i<n ; i++){
        printf("%d ",arr[i]);
    }
}