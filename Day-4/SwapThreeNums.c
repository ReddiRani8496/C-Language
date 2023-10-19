#include<stdio.h>
int main() {
    int a=10,b=20,c=30;
    a = a + b + c; // 60
    b = a - b - c; // 60-20-30 = 10
    c = a - b - c; // 60-10-30 = 20
    a = a - b - c; // 60-10-20= 30
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
}