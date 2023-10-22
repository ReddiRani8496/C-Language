#include<stdio.h>
#include<limits.h>
int main() {
    int arr[5];
    int i;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++) {
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    for(i=0;i<len;i++) {
        if(arr[i]>max)
            max=arr[i];
    }
    printf("%d",max);
}