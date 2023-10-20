#include<stdio.h>
int main() {
    int i=1;
    while (i<=5)
    {
        printf("* ");
        i++;
    }
    i=1;
    for(i=1;i<=4;i++) {
        printf("\n");
        for(int j=0;j<=4;j++){
            if(j==0 || j==4){
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
    }
    i=1;
    printf("\n");
    while (i<=5)
    {
        printf("* ");
        i++;
    }
    
    
}