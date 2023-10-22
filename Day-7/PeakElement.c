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
    
    // if(size==1) {
    //     printf("%d",arr[0]);
    //     return;
    // }
   if(arr[0]>arr[1])
    printf("%d ",arr[0]);

    for(i=1;i<size-1;i++) {
        
        if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1])) {
           printf("%d ",arr[i]);
        }
    }
    if(arr[size-1]>arr[size-2])     
        printf("%d",arr[size-1]);
}