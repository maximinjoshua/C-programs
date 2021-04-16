#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node* link;
    };

void insert_to_end(struct node *head, int data){
    struct node* ptr;
    ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;
    struct node* ptr2 = head;
    while(ptr2->link!=NULL){
        ptr2 = ptr2->link;
    }
    ptr2->link = ptr;
}
void print(struct node* head){
    struct node* ptr;
    ptr = head;
    while(ptr!=NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}
struct node* reverse_a_linked_list(struct node* head){
    struct node* ptr = NULL;
    struct node *ptr2=NULL;
    while(head->link!=NULL){
        ptr2 = head->link;
        head->link=ptr;
        ptr = head;
        head = ptr2;
    }
    head->link = ptr;
    return head;
}

int main(){
    struct node* head;
    head = malloc(sizeof(struct node));
    head->data = 12;
    head->link = NULL;
    insert_to_end(head, 13);
    insert_to_end(head, 14);
    print(head);
    struct node *rev = reverse_a_linked_list(head);
    printf("==========\n");
    print(rev);

  
}
    
