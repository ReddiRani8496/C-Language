#include<stdio.h>
int main() {
    int arr[3] = {1,2,3};
    int *p = arr;
    printf("%p\n",p);// returns the base adress of array
    printf("%p\n",arr); // returns the base address of array
    printf("%d\n",*p);// returns the value in 0th index of array
    int i;
    for(i=0;i<3;i++)
        printf("%d\n",*(p+i)); // returns the array values
    
    printf("%d %d %d",*p,*(p+1),*(p+2)); // returns the array values

    printf("\n%d\n",p[0]); //returns the 0th index value in aray
    printf("%d\n",p[1]);
    printf("%d\n",p[2]);
} 