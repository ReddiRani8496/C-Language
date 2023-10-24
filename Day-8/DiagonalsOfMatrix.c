#include<stdio.h>
int main() {
    int rows,cols;

    printf("Enter number of rows: ");
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
    
    for(int i=0;i<rows;i++)
        printf("%d ",arr[i][i]);
}