#include<stdio.h>
int main() {
    int arr[5];
    int sum = 5;
    int i,j;
    int total=0;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++) {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<len-1;i++) {
        for(j=i+1;j<len;j++){
            if(arr[i]+arr[j]==sum) {
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
    printf("Not exist");
}