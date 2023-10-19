#include<stdio.h>
int main() {
    int a = 10, b=20;
    int c = a + b * 32 > b + 100; // first *, then + , then >
    printf("%d\n",c);

    int d = a > b || a > 2; // 10 > 20 || 10>2 => 0 || 1 => 1
    printf("%d\n",d);

    int e = a > b || a > 2 && 5 > 5; // 10 > 20 || 10 > 2 && 5 > 5 => 0 || 1 && 0 => 1 && 0 => 0
    printf("%d",e);
}