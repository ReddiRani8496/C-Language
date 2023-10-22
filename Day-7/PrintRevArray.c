#include<stdio.h>
int main() {
    int arr[5];
    int i;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++) {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<len;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(i=len-1;i>=0;i--) {
        printf("%d ",arr[i]);
    }
    
    printf("\n");
    for(i=0;i<len;i++) {
        printf("%d ",arr[len-i-1]);
    }
}