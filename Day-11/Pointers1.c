#include<stdio.h>
int main() {
    int x=2,y=5,z=6;
    int *pointers[3];
    pointers[0]=&x;
    pointers[1]=&y;
    pointers[2]=&z;
    printf("%p\n",pointers);//returns the base address of pointers array
    printf("%p\n",pointers[0]);//returns the address of variable x
    printf("%p\n",&x); // returns the address of x
    printf("%d\n",*pointers[0]); // returns the value of x
    int i;
    for(i=0;i<3;i++)
        printf("%d\n",**(pointers+i));
}