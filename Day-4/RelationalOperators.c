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
    printf("%d\n", 'a' == 97); // returns 1, ascii of a = 97, 97==97
    printf("%d\n",'a' == 'A'); // 97 == 65 returns false
    printf("%d\n","a"=="A"); // strings can't be compared
}