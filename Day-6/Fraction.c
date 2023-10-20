#include<stdio.h>
int main() {
    int n=5;
    int numerator=1;
    int i;
    for(i=1;i<n;i++){
        printf("%d/%d + ",numerator,i);
    }
    printf("%d/%d",numerator,i);
}