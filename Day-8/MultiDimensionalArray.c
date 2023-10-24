#include<stdio.h>
int main() {
    int rows,cols,val;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    printf("Enter number of columns: ");
    scanf("%d",&cols);

    printf("Enter number of values: ");
    scanf("%d",&val);

    int arr[rows][cols][val];

    int i,j,k;
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++){
            for(k=0;k<val;k++)
            scanf("%d",&arr[i][j][k]);
        }
    }
    
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++) {
            for(k=0;k<val;k++)
             printf("%d ",arr[i][j][k]);
            printf("\n");
        }
        printf("\n");
    }
}