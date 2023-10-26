#include<stdio.h>
#include<string.h>
int main() {
    char str[10];
    scanf("%s",str); 
    char str1[10];
    scanf("%s",str1);
    int len=strlen(str);
    int i,j;
    for(i=0;i<len;i++) {
        for(j=0;j<len;j++)
            if(str[i]==str1[j])
                printf("%c",str1[j]);
    }
}