#include<stdio.h>
#include<string.h>
int main() {
    char str[10];
    scanf("%s",str); 
    int len = strlen(str);
    int i;
    for(i=0;i<len;i++) {
        if(str[i]>=49 && str[i]<=57)
            printf("%c", str[i]);
    }
}