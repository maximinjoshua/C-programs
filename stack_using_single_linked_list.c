#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}*top = NULL;
void push(int d){
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = d;
    if(top==NULL){
        newNode->next = NULL;
    }
    else{
        newNode->next = top;
    }
    top = newNode;
}
void pop(){
    if(top==NULL){
        printf("the stack is empty");
    }
    else{
        struct node* popptr;
        popptr = top;
        top = top->next;
        free(popptr);
    }
}
void display(){
    struct node* ptr;
    ptr = top;
    while(ptr!=NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main(){
    push(8);
    push(7);
    push(6);
    push(5);
    pop();
    pop();
    display();
}