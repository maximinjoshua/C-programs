#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* rchild;
    struct node* lchild;
    int data;
};
int findSmallestNode(struct node* root){
    while(root->lchild!=NULL){
        root = root->lchild;
    }
    return root->data;
}
struct node* delete(struct node* root, int d){
    if(root == NULL){
        return root;
    }
    else if(d < root->data){
        root->lchild = delete(root->lchild, d);
    }
    else if(d > root->data){
        root->rchild = delete(root->rchild, d);
    }
    else{
        if(root->rchild == NULL && root->lchild == NULL){
            free(root);
            root = NULL;
            return root;
        }
        else if(root->lchild = NULL){
            struct node* temp;
            temp = root->rchild;
            free(root);
            root = temp;
        }
        else if(root->rchild = NULL){
            struct node* temp;
            temp = root->lchild;
            free(root);
            root = temp;
        }
        else if(root->rchild!=NULL && root->lchild != NULL){
            int smallnode = findSmallestNode(root->rchild);
            root->data = smallnode;
            root->rchild = delete(root->rchild, smallnode);
        }
    }
    return root;
}
struct node* insert(struct node* root, int d){
    if(root == NULL){
        struct node* temp = malloc(sizeof(struct node));
        temp->lchild = NULL;
        temp->data = d;
        temp->rchild = NULL;
        root = temp;
    }
    else{
        if(d < root->data){
            root->lchild = insert(root->lchild, d);
        }
        else{
            root->rchild = insert(root->rchild, d);
        }

    }
    return root;

}
int main(){
    struct node* root = NULL;
    root = insert(root, 78);
    root = insert(root, 56);
    root = insert(root, 34);
    root = insert(root, 89);
    root = insert(root, 36);
    root = insert(root, 97);
    root = delete(root, 36);
    printf("%d\n",root->data);
    printf("%d\n",root->lchild->lchild->rchild->data);


}