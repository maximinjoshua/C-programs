#include<stdio.h>

float add(float a, float b){
    return (a+b);
}
float subtract(float a, float b){
    return (a-b);
}
float multiply(float a, float b){
    return (a*b);
}
float divide(float a, float b){
    return (a/b);
}

void main(){
    int choice;
    float a, b, result;
    float (*ptr[4])(float, float) = {add,subtract,multiply,divide};
    printf("Enter the operation you want to perform: ");
    scanf("%d", &choice);
    printf("\nEnter two numbers for the operation to be performed\n");
    scanf("%f %f", &a, &b);
    result = ptr[choice](a,b);
    printf("%f", result);
}