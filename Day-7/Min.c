#include<stdio.h>
#include<limits.h>
int main() {
    int arr[5];
    int i;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++) {
        scanf("%d",&arr[i]);
    }
    int min = INT_MAX;
    for(i=0;i<len;i++) {
        if(arr[i]<min)
            min=arr[i];
    }
    printf("%d",min);
}