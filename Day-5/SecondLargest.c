#include<stdio.h>
int main() {
    int a = 10,b=20,c=5;
    if((a>b && a<c) || (a<b && a>c))
        printf("%d",a);
    else if((b>a && b<c) || (b<a && b>c))
        printf("%d",b);
    else if((c>a && c<b) || (c<a && c>b))
        printf("%d",c);
    else
        printf("Equal");
    return 0;
}