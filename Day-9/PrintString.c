#include<stdio.h>
#include<string.h>
int main() {
    char str[10];
    scanf("%s",str); 
    int i;
    for(i=0;str[i]!='\0';i++)
        printf("%c",str[i]);

    char str1[]={'h','e','l','l','o'};
    for(i=0;str1[i]!='\0';i++)
        printf("%c",str1[i]);
}