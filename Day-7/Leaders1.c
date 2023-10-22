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
    
    int max = arr[size-1];
    printf("%d ",max);
    for(i=size-2;i>=0;i--){
        if(arr[i]>max) {
            max=arr[i];
            printf("%d ",max);
        }
    }
}