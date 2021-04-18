#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
void add_to_empty(struct node *head,int d){
    head->data = d;
    head->prev = NULL;
    head->next=NULL;
}
void add_to_end(struct node *head,int d){
    struct node* temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = d;
    temp->next = NULL;
    struct node* ptr = NULL;
    ptr = head;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
}
void print(struct node* head){
    struct node* ptr;
    ptr = head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}
void insert_in_the_middle(struct node *head, int d, int pos){
    struct node* temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = d;
    temp->next = NULL;
    struct node* ptr;
    ptr = head;
    for(int i = 0; i<pos-2 ; i++){
        ptr = ptr->next;
    }
    struct node *ptr2 = ptr->next;
    temp->prev = ptr;
    ptr->next = temp;
    temp->next = ptr2;
    ptr2->prev = temp;
}

int main(){
    struct node* head;
    head = malloc(sizeof(struct node));
    add_to_empty(head, 35);
    add_to_end(head, 45);
    add_to_end(head, 78);
    print(head);
    printf("=====");
    insert_in_the_middle(head, 89, 3);
    print(head);
    free(head);
}