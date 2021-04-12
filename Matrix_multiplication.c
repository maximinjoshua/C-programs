#include<stdio.h>
void main(){
    int i, j, arows, acols, brows, bcols;
    printf("Enter the dimensions of the first matrix: ");
    scanf("%d %d", &arows,&acols);
    printf("Enter the dimensions of the second matrix: ");
    scanf("%d %d", &brows, &bcols);
    if(acols != brows){
        printf("Matrix multiplication is not possible");
    }
    else{
        int a[arows][acols], b[brows][bcols], c[arows][bcols];
        printf("Enter the elements of the first matrix one by one\n");
        for(i = 0 ; i < arows ; i++){
            for (j = 0 ; j< acols ; j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("\nEnter the elements of the second matrix one by one\n");
        for(i = 0 ; i < brows ; i++){
            for (j = 0 ; j< bcols ; j++){
                scanf("%d",&b[i][j]);
            }
        }
        for(i = 0 ; i < arows ; i++){
            for (j = 0 ; j< bcols ; j++){
                c[i][j] = 0;
                for(int k=0 ; k < acols; k++){
                    c[i][j] += a[i][k] * b[k][j];
                    printf("%d", c[i][j]);
                }
            }
        }
        printf("The a matrix is\n");
        for(i = 0; i<arows ; i++){
            for(j=0; j<acols ; j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        printf("The b matrix is\n");
        for(i = 0; i<brows ; i++){
            for(j=0; j<bcols ; j++){
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
        printf("The resultant matrix is\n");
        for(i = 0; i<arows ; i++){
            for(j=0; j<bcols ; j++){
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
}