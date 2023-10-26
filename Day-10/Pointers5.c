#include<stdio.h>
int main() {
    int a = 10;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    ***d = 20;
    printf("%d\n",a); // 20
    printf("%d\n",*b); // 20
    printf("%d\n",**c); // 20
    printf("%d",***d); // 20
}