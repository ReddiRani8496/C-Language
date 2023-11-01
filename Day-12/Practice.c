#include<stdio.h>
int main(){
    int arr[5];
    int *q = arr;
    for(int i=0;i<5;i++)
        scanf("%d",&q[i]);
    for(int i=0;i<5;i++)
        printf("%d\n",arr[i]);
    printf("%p\n",arr);
    printf("%p\n",(&arr+1));

    int arr1[][2]={{2,3},{1,4}}; // rows are optional
   // int arr2[2][] ={{3,4},{6,7}};  // columns are mandatory
}