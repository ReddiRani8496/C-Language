#include<stdio.h>
int main() {
    int arr[5];
    int sum = 6;
    int i,j,k;
    int total=0;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++) {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<len-2;i++) {
        for(j=i+1;j<len-1;j++){
            for(k=j+1;k<len;k++){
                if(arr[i]+arr[j]+arr[k]==sum) {
                    printf("%d %d %d",arr[i],arr[j],arr[k]);
                    return 0;
                }
            }
        }
    }
    printf("sum not exist");
}