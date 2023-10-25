#include<stdio.h>
#include<string.h>
int main() {
    char str[10];
    scanf("%s",str); 
    char str1[10];
    strcpy(str1,str);
    printf("%s",str1);
}