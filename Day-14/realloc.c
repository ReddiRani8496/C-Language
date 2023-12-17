#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr = (int*)malloc(3*sizeof(int));
    ptr = (int*)realloc(ptr,sizeof(int)*6000000000);
   // func(ptr);

   if(ptr==NULL) {
    printf("Null pointer");
   }
}

