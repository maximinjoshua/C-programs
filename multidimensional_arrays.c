#include<stdio.h>
void main(){
    int a,b,i,j;
    printf("Enter the dimensions of the two dimensional array: ");
    scanf("%d %d", &a,&b);
    printf("Enter the elements of the array one by one");
    int arr[a][b];
    for(i = 0 ; i < a ; i++){
        for (j = 0 ; j< b ; j++){
            // printf("%d %d\n",a,b);
            // printf("Enter the value\n");
            scanf("%d",&arr[i][j]);
        }
    }
    for(i = 0 ; i < a ; i++){
        for (j = 0 ; j< b ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nRowsums:\n");
    for(i=0; i<a; i++){
        int sum = 0;
        for(j=0 ; j<b; j++){
            sum = sum+arr[i][j];
        }
    printf("%d ",sum);
    }
    printf("\nColumnsums:\n");
    for(j=0; j<b; j++){
        int sum = 0;
        for(i=0 ; i<a ; i++){
            sum = sum + arr[i][j];
        }
    printf("%d ", sum);

    }
}
    