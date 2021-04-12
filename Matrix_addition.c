#include<stdio.h>
void main(){
    int i, j, rows, cols;
    printf("Enter the dimensions of the matrices to be added: ");
    scanf("%d %d", &rows,&cols);
    int a[rows][cols], b[rows][cols], c[rows][cols];
    printf("Enter the elements of the first matrix one by one\n");
    for(i = 0 ; i < rows ; i++){
        for (j = 0 ; j< cols ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the elements of the second matrix one by one\n");
    for(i = 0 ; i < rows ; i++){
        for (j = 0 ; j< cols ; j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0 ; i<rows ; i++){
        for(j=0 ; j<cols ; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The resultant matrix is\n");
    for(i = 0 ; i < rows ; i++){
        for(j = 0; j < cols; j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}