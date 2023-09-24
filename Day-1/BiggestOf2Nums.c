#include<stdio.h>
int main() {
    int a = 10;
    int b = 20;
    int big = ((a>b) * a) + ((b>a) * b);
    printf("%d",big);
    return 0;
}