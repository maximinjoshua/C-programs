#include<stdio.h>
void main(){
    int a, remainder, result, q;
    printf("enter a number to check whether it is a palindrome or not");
    scanf("%d", &a);
    q=a;
    while(q!=0){
        remainder = q%10;
        result = result*10 + remainder;
        q = q/10;
        
    }
    if(result == a){
        printf("it is a palindrome");
    }
    else{
        printf("it is not a palindrome");
    }
}
// #include<stdio.h>
// void main(){
//     int a = 1;
//     int b;
//     b = a/10;
//     printf("%d", b);
// }