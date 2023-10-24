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

    int arr1[n][n];  
    for(i=0;i<n;i++) {
        int j;
        for(j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
   
    int sum[n][n];
    for(i=0;i<n;i++) {
        int j;
        for(j=0;j<n;j++) {
            sum[i][j] = arr[i][j]+arr1[i][j];
        }
    }
    
    for(i=0;i<n;i++) {
        int j;
        for(j=0;j<n;j++) {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

}