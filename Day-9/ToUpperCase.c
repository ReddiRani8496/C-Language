#include<stdio.h>
#include<string.h>
int main() {
    char str[10];
    scanf("%s",str); 
    int len = strlen(str);
    int i;
    for(i=0;i<len;i++)
        str[i]=str[i]-32;
    printf("%s",str);
}