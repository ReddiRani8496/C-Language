#include<stdio.h>
int main() {
    int arr[5];
    int i;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++) {
        scanf("%d",&arr[i]);
    }
    int arr1[5];
    for(i=0;i<len;i++) {
        arr1[i]=arr[i];
    }
    for(int i=0;i<len;i++)
        printf("%d ",arr1[i]);
}