#include<stdio.h>
void main(){
    int a, q, remainder, result;
    printf("Enter the number to be checked if armstrong: ");
    scanf("%d", &a);
    q = a;
    int count=0;
    while(q!=0){
        remainder = q%10;
        count++;
        q = q/10;
    }
    int sum = 0;
    q = a;
    while(q!=0){
        remainder = q%10;
        result = 1;
        int cnt;
        for(cnt = 0; cnt<count; cnt++){
            result = result*remainder;
        }
        sum = sum+result;
        q = q/10;

    }
    if(sum==a){
        printf("It is an armstrong number");
    }
    else{
        printf("It is not an armstrong number");
    }
} 
