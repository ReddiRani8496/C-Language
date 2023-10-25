#include<stdio.h>
#include<string.h>
int main() {
    char str[10];
    scanf("%s",str); 
    int len1 = strlen(str);
    char str1[10];
    scanf("%s",str1);
    int len2=strlen(str1);
    int flag;
    int i;
    for( i=0;i<len1-len2;i++) {
         flag = 0;
        for(int j=i;j<i+len2;j++) {
            if(str[j]!=str1[j-i]) {
                flag=1;
                break;
            }
        }
        if(flag==0){
            break;
        }
    }
    if(flag == 0)
        printf("string found");
    else 
        printf("not found");
}