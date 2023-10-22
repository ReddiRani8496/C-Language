#include<stdio.h>
int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    int i;
    printf("\nEnter the elements: ");
    for(i=0;i<size;i++)
      scanf("%d",&arr[i]);
    
    int j;
   int flag = 0;
    for(i=0;i<size-1;i++) {
        for(j=i+1;j<size;j++){
            if(arr[i]<=arr[j]) {
                flag = 1;
                break;
            }
        }
        if(flag==0) {
            printf("%d ",arr[i]);
        }
        else {
            flag=0;
        }
    }
    printf("%d",arr[size-1]);
}