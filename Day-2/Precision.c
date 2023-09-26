#include<stdio.h>
int main() {
    float val = 12.345678;
    printf("%f\n",val); // it will give 6 precisions
    printf("%.2f\n",val); // it will give only 2 precisions 12.35 it will give, next precision will be rounded
    printf("%.8f",val); // the float will take only 6 precisions, if we access more than 6, remaining values will be garbage values
    
    return 0;
}