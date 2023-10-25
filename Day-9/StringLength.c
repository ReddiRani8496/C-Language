#include<stdio.h>
#include<string.h>
int main() {
    char str[10];
    scanf("%s",str); // reads characters upto space
    int length = strlen(str);
    printf("%d",length);
}