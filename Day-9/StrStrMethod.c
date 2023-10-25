#include<stdio.h>
#include<string.h>
int main() {

    char str[100];
    gets(str);

    char str1[100];
    scanf("%s",str1);

    char *diff = strstr(str,str1);
    printf("%s",diff);

}