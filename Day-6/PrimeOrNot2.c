#include<stdio.h>
#include<math.h>
int main() {
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    int flag = 0;
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0) {
            printf("Not prime");
            flag=1;
            break;
        }
    }
    if(!flag)
        printf("Prime");
}