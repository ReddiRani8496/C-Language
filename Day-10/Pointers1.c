#include<stdio.h>
int main() {
    int a=10;
    int *b=&a; 
    printf("%p\n",b);
    printf("%p\n",&a); // prints the address of a variable
    int c = &a; // can't store address in integer, the address will overflow
    printf("%d",c); 
}