#include<stdio.h>
int main() {
    int a = 1;
    a ^= 1;
    printf("%d\n",a);

    a ^= 1;
    printf("%d\n",a);

    int b = 4;
    int c = b >> 2; // 4 / 2*2 => 4/4 => 1
    printf("%d\n",c);

    int d = b << 2; // 4 * 2 *2 => 16
    printf("%d\n",d);

    printf("%d\n", 15 & 15); // 15
    printf("%d\n", 15 ^ 15); // 0
}