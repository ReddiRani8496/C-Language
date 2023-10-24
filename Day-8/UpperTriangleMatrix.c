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
    int res[n][n];
    
    for(i=n-1;i>=0;i--) {
        int j;
        for(j=0;j<=i;j++)
            res[i][j]=arr[i][j];

        while (j<n)
        {
            res[i][j++]=0;
        }
    }

    for(i=0;i<n;i++) {
        int j;
        for(j=0;j<n;j++)
          printf("%d ",res[i][j]);
        printf("\n");
    }
}