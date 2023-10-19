#include<stdio.h>
int main() {
    int a;
    a=10,20,30;
    printf("%d\n",a); // 10
    a=(10,20),30;
    printf("%d\n",a); //20
    a=(10,20,30); // 30
    printf("%d\n",a);
    int b = 3;
    int c;
    c= b++ + b++ + b++; // c= 3+3+3 = 12 and b=3+1=4+1=5+1=6
    printf("%d %d\n",b,c); // b=6, c=12
    b=1;
    c= ++b + ++b + ++b; // b= 1+1=2,b=3.b=4 and c= 4+4+4=12
    printf("%d %d\n",b,c);
    // int a = 20;
    // a++/2;
    // printf("%d\n",a); // a=21
    // a=20;
    // a=a++/2; // first division 20/2=10, then a increment and assignment
    // printf("%d\n",a); // 11
}