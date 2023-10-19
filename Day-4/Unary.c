#include<stdio.h>
int main() {
    int a = 20;
    int b;
    b = ++a; // b = 21, first pre increment then assignment
    printf("%d\n",b);
    int c;
    c = a++; // c=20, first assignment then post increment
    printf("%d\n",c);
}