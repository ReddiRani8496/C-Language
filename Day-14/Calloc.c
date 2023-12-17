#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
    ptr = (int*)calloc(4,sizeof(int));
    *ptr = 10;
    *(ptr+1)=20;
    printf("%d\n%d",*ptr,*(ptr+1));
    printf("\n%d\n%d",*(ptr+2),*(ptr+3)); // while assigining the memory, all values are initialized to zero
    free(ptr);
}