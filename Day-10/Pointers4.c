#include<stdio.h>
int main() {
    int a = 10;
    int *b = &a;
    int **c = &b;
    printf("%p\n",b); // prints the address of a
    printf("%d",**c); // prints the value at a i.e., 10
}