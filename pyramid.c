#include<stdio.h>
void main(){
    int N,row,col,spc;
    printf("Enter the number of rows you want in the pyramid: ");
    scanf("%d", &N);
    for(row=0;row<N;row++){
        for(spc=0;spc<=N-row;spc++){
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++){
            printf("*");
        }
    printf("\n");
    }

}