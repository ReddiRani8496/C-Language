#include<stdio.h>
int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        int j;
        for(j=0;j<=i;j++)
            printf("* ");
        printf("\n");
    }
}