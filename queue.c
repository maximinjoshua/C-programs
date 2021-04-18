#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
}*front = NULL,*rear = NULL;
void enqueue(int d){
    struct node *temp = malloc(sizeof(struct node*));
    temp->data = d;
    temp->link = NULL;
    if(front == NULL && rear == NULL){
        front = temp;
        rear = temp;
    }
    else{
        rear->link = temp;
        rear = temp;
    }
}
void dequeue(){
    struct node* ptr;
    ptr = malloc(sizeof(struct node));
    ptr = front->link;
    free(front);
    front = ptr;
}

void display(){
    struct node* ptr;
    ptr = front;
    while(ptr!=NULL){
        printf("%d\n", ptr->data);
        ptr=ptr->link;
    }
}
int main(){
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    display();
    dequeue();
    dequeue();
    printf("=======\n");
    display();
}