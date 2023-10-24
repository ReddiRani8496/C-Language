#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int i;
    for(i=0;i<n;i++) {
        int j;
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int temp[1][1];
    int j;
    for(i=0;i<n;i++) {
        for(j=1;j<n;j++) {
             temp[0][0] = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp[0][0];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
}