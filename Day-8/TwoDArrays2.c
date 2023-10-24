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
    
    for(i=0;i<rows;i++){
        int j;
        for(j=0;j<cols;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}