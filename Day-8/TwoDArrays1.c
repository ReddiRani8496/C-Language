#include<stdio.h>
int main() {
   // int arr[][] = {{1,2,3},{4,5,6}}; not allowed size has to initialized
   int arr[2][3] = {{1,2,3},{4,5,6}};
   int i;
   for(i=0;i<2;i++) {
    int j=0;
    for(j=0;j<3;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
   }
}