#include<stdio.h>
int main() {
    int a = 10;
    int *x = &a;
    printf("%d",*x); // deferencing operator, returns the value present in that address
}