#include<stdio.h>
int main() {
    int a = 5, b=10;
    a>b ? printf("a is big\n") : printf("b is big\n");

    int c = a > b ? a : b;
    printf("%d\n",c);
}