#include<stdio.h>
int main() {
    int arr[2][3][2]={
        {{2,4},{7,8},{3,4}},
        {{2,14},{4,5},{9,0}}};
    int i,j,k;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++) {
            for(k=0;k<2;k++)
             printf("%d ",arr[i][j][k]);
            printf("\n");
        }
        printf("\n");
    }
}