#include<stdio.h>
int main() {
    int b;
    int a;
    a=5,b=3;
    int c=a+b*3/2; // follows bodmas rule
    // precedence: if two or more operators having the same precedence, then asscoiativity will come into place

    printf("%d",c);
}