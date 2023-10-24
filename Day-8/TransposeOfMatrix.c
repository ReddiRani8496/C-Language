#include<stdio.h>
int main() {
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int temp[1][1];
    int i,j;
    for(i=0;i<2;i++) {
        for(j=1;j<3;j++) {
             temp[0][0] = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp[0][0];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
}