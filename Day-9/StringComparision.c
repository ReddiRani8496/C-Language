#include<stdio.h>
#include<string.h>
int main() {
    char str[10];
    scanf("%s",str); 
    char str1[10];
    scanf("%s",str1);
    int diff = strcmp(str,str1); // returns 0 if same,if second string is big return negative value , else positive value
    printf("%d",diff);
}