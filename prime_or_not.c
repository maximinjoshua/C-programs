#include<stdio.h>
#include<stdbool.h>
void main(){
    int a;
    bool flag;
    printf("Enter the number to check whether it is prime or not: ");
    scanf("%d", &a);
    flag = true;
    if(a<=1){
        flag = false;
    }
    else{
        for(int i = 2;i < a; i++){
            if(a%i==0){
            flag = false;
            break;
        }
    }}
    if(flag == true){
        printf("It is a prime number");
    }
    else{
        printf("It is a composite number");
    }
}