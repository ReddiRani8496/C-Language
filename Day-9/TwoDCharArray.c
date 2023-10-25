#include<stdio.h>
#include<string.h>
int main() {
    char arr[3][5] = {"rock","monk","make"};
    printf("%s",arr[0]);
    int i;
    int len = strlen(arr);
    for(i=0;i<len;i++)
        printf("%s ",arr[i]);
}