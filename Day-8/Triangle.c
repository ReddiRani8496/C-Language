#include<stdio.h>
int main() {
    int i;
    for(i=0;i<5;i++){
        int j;
        for(j=0;j<=i;j++)
            printf("* ");
        printf("\n");
    }
}