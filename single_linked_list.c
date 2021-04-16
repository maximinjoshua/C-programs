#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head = NULL;
    head = malloc(sizeof(struct node));
    head->data = 12;
    head->link = NULL;

    struct node *current = NULL;
    current = malloc(sizeof(struct node));
    current->data = 13;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 14;
    current->link = NULL;
    head->link->link = current;

    //traverse the list and print the data
    void print(struct node* head){
        if(head == NULL){
            printf("the linked list is empty");
        }
        struct node *ptr = head;
        int count = 0;
        while(ptr!=NULL){
            printf("%d\n", ptr->data);
            count++;
            ptr = ptr->link;
        }
        //print the number of nodes
        printf("%d\n", count);
    }
    print(head);
    //create a separate node and insert it to the end of this list
    struct node *temp = NULL;
    temp = malloc(sizeof(struct node));
    temp->data = 15;
    temp->link = NULL;

    struct node* ptr = NULL;
    ptr = head;
    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;

    print(head);

}