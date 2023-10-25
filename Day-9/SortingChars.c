#include<stdio.h>
#include<string.h>
int main() {
    char str[10];
    scanf("%s",str); 
    int len=strlen(str);
    int i,j;
    for(i=0;i<len;i++) {
        for(j=i+1;j<len;j++) {
            if(str[i]>str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j]=temp;
            }
        }
    }
    printf("%s",str);
}