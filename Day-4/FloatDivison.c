#include<stdio.h>
int main() {
    // float a,b;
    // a=5,b=3;
    // printf("%f", a % b); throws an error both operands are float

    // float b;
    // int a;
    // b=3.0;
    // a=5;
    // printf("%f", a % b); throws an error int and float moduls can't be performed

    int a,b;
    a=5,b=3;
    printf("%d",a%b);
}