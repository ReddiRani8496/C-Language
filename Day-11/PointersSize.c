#include<stdio.h>
int main() {
    int *pointers[3];
    printf("%d\n",sizeof(pointers)); // each pointer variable takes 8bytes , 8*3=24bytes 
    printf("%d\n",sizeof(pointers[0])); // 8
}