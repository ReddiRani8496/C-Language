#include<stdio.h>
int main() {
    int rows,cols;
    scanf("%d %d",&rows,&cols);
    int arr[rows][cols];
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++)
            scanf("%d",&arr[i][j]);
    }
    
    int *p = arr;
    printf("%p\n",p); // stores the base address of array
    printf("%p\n",&arr[0][0]); // returns the base address of array
    printf("%p\n",&arr); // returns the base address
    printf("%p\n",arr[0]); // returns the base address
    printf("%p\n",*arr); // returns the base address
    printf("%p\n",arr+1); // returns the first row base index
    printf("%p\n",&arr[1][0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2][0]); // retuns the second row base index
    printf("%p\n",*(arr[1]+1));
    printf("%d\n",**(arr+1)); // to access the value use two deferences
}

/*
Internally the array is like

     arr[0]                     arr[1]                arr[2]
10            20            30         40         50          60
arr[0][0]  arr[0][1]    arr[1][0]  arr[1][1]   arr[2][0]  arr[2][1]
*/