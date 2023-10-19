#include<stdio.h>
int main() {
    int a,b;
    a=10,b=20;
    int c = a>b; // return 1 or 0
    printf("%d\n",c);
    printf("%d\n",a<b);
    printf("%d\n", a <= b);
    printf("%d\n", 15 >= 15);
    printf("%d\n", 10 != 11);
}