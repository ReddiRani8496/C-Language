#include<stdio.h>
int main() {
    int arr[]={1,2,3};
   // int[] arr={1,2,3}; Invalid array declaration
    // int arr[]; Invalid array declaration size should be declared
    int arr1[5];
    arr1[0]=10;
    arr1[1]=20;
    arr1[2]=30;
    arr1[3]=40;
    arr1[4]=50;
    printf("%d\n",arr1[2]);
    printf("%d\n",arr1[9]); // gives garbage value
    int len = sizeof(arr1)/sizeof(arr1[0]); // finding length of array, sizeof(arr1) gives size in bytes
    for(int i=0;i<len;i++)
        printf("%d ",arr1[i]);
}