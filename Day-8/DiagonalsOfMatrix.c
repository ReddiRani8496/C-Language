#include<stdio.h>
int main() {

    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    int i;
    for(int i=0;i<3;i++)
        printf("%d ",arr[i][i]);
}