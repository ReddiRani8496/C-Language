#include<stdio.h>
int main() {
    printf("Enter number of rows in first matrix: ");
    int rows,cols;
    scanf("%d",&rows);

    printf("Enter number of columns in first matrix: ");
    scanf("%d",&cols);
    int arr[rows][cols];
     printf("Enter values in first matrix: ");
    int i;
    for(i=0;i<rows;i++) {
        int j;
        for(j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Enter number of rows in second matrix: ");
    scanf("%d",&rows);

    printf("Enter number of columns in second matrix: ");
    scanf("%d",&cols);

    int arr1[rows][cols];
     printf("Enter values in second matrix: ");

    for(i=0;i<rows;i++) {
        int j;
        for(j=0;j<cols;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
   
    int sum[rows][cols];
    for(i=0;i<rows;i++) {
        int j;
        for(j=0;j<cols;j++) {
            sum[i][j] = arr[i][j]+arr1[i][j];
        }
    }
    for(i=0;i<rows;i++) {
        int j;
        for(j=0;j<cols;j++) {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

}