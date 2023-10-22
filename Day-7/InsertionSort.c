#include<stdio.h>
int main() {
    int arr[5];
    int i,j;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++) {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<len;i++){
            int element=arr[i];
            j=i-1;
            while(j>=0&&arr[j]>element){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=element;
    }
    for(i=0;i<len;i++) {
        printf("%d ",arr[i]);
    }
}