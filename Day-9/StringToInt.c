#include<stdio.h>
#include<string.h>
int main() {
    char arr[10];
    scanf("%s",arr);
    int len=strlen(arr);
    int i;
    int res=0;
    int power=1;
    for(i=len-1;i>=0;i--) {
        int element=arr[i] - '0';
        res += (element * power);
        power *= 10;
    }
    printf("%d",res);
}