#include<stdio.h>

struct point{
    int a;
    int b;
};

struct point edit(struct point p){
    p.a = p.a+1;
    p.b = p.b+1;
    return p;
}
void print(struct point p){
    printf("%d %d\n", p.a, p.b);
}


int main(){
    struct point p1 = {2,3};
    struct point p2 = {4,5};
    p1 = edit(p1);
    p2 = edit(p2);
    print(p1);
    print(p2);
}