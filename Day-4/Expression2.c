#include<stdio.h>
int main() {
    int a,b;
    a=5,b=3;
    int c = 2 * ++a; // 2 * 6 -> 12
    printf("%d",c);
}