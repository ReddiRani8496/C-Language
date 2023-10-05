#include<stdio.h>
int main() {
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    printf("%d %d",n1,n2);
    return 0;
}

// input 12 a
// output 12 garbage value
// because we are reading integer value, but providing char as input.