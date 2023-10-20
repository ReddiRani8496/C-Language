#include<stdio.h>
int main() {
    int n=5,start=3;
    int i;
    int num;
    for(i=0;i<n;i++){
        num = num*10+start;
        printf("%d ",num);
    }
}