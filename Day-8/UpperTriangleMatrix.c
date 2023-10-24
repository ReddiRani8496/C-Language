#include<stdio.h>
int main() {
    int arr[4][4] = {{1,2,3,1},{4,5,6,1},{7,8,9,1},{3,4,7,8}};
    int i;
    for(i=3;i>=0;i--) {
        int j;
        for(j=0;j<=i;j++)
            printf("%d ",arr[i][j]);
        while (j<4)
        {
            printf("0 ");
            j++;
        }
        
        printf("\n");
    }
}