#include<stdio.h>
int main() {
    int a,b;
    a=100,b=7;
    int quotient = a/b;
    int remainder = a-b*quotient; // remainder = dividend-divisor*quotient
    printf("%d",remainder); 
}