#include<stdio.h>
#include<string.h>
int main() {
    char str[5];
    scanf("%s",str); 
    int size = sizeof(str);
    printf("%d",size); // returns size including null character
}