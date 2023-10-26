#include<stdio.h>
int main() {
    int a = 10;
    int *x = &a;
    printf("%p\n",x); // returns the address of a
    printf("%p",x+1); // adress of a plus 1, a will take 4 bytes,hence 5th byte address returned
    // if address of x is 0x7ffe04fdf40c , then x+1 means 0c 0d 0e 0f and 5th byte is 10 returned
}