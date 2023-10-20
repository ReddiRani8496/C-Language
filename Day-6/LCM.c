#include<stdio.h>
int main() {
    printf("Enter numbers: ");
    int n1,n2;;
    scanf("%d %d",&n1, &n2);
    int j=n1>n2?n1:n2;
    int gcd;
    for(int i=j;i>=1;i--) {
        if(n1%i==0 && n2%i==0) {
            gcd=i; 
            break;
        }
    }
    int lcm = (n1*n2)/gcd;
    printf("%d",lcm);
}