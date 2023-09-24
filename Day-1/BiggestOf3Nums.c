#include<stdio.h>
int main() {
    int a = 100;
    int b = 90;
    int c = 30;
    int big = (((a>b)&&(a>c))*a) + (((b>a)&&(b>c))*b)+(((c>a)&&(c>b))*c);
    printf("%d",big);
    return 0;
}