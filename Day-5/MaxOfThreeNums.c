#include<stdio.h>
int main() {
    int a = 10,b=20,c=5;
    int d = a>b?a:b;
    int max = d>c?d:c;
    printf("%d",max);
    return 0;
}