#include<stdio.h>
int main() {
    int a = 15;
    int b = 10;
    float c = 10/20; // it will return integer value, 1
    printf("%f\n",c);
    float d = (float)(a)/b; // explicit casting
    printf("%f\n",d);

    int num1 = 1000000000;
    int num2 = 1000000000;
    int mul = num1*num2; // when we multiply num1 and num2, it exceeds the int range and generates garbage value
    printf("%d\n",mul);

    long mul1 = num1 * (long) num2; // explicit casting
    printf("%ld",mul1);
    return 0;
}
