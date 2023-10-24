#include<stdio.h>
int main() {
       printf("Enter number of rows: ");
    int rows,cols;
    scanf("%d",&rows);

    printf("Enter number of columns: ");
    scanf("%d",&cols);
    int arr[rows][cols];
    int i;
    for(i=0;i<rows;i++) {
        int j;
        for(j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int temp[1][1];
    int j;
    for(i=0;i<rows;i++) {
        for(j=1;j<cols;j++) {
             temp[0][0] = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp[0][0];
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
}