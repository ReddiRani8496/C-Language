#include<stdio.h>
int main() {
    int arr[2][3] = {{1,2,3},{4,5,6}};
    int arr1[2][3] = {{3,8,5},{1,9,4}};
    int mul[2][3];
    int i;
    for(i=0;i<2;i++){
        int j;
        for(j=0;j<3;j++){
            mul[i][j]=arr[i][j]*arr1[i][j];
        }
    }

    for(i=0;i<2;i++) {
        int j;
        for(j=0;j<3;j++) {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}