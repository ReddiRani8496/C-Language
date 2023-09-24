#include<stdio.h>
int main() {

    if(1) {
        printf("The condition is true\n");
    }

    if(0) {
        printf("The condition is false\n");
    }

    if(-1) {
        printf("The codition is true\n");
    }

    if(5>3) { // it will return 1 if condition is true
        printf("5 is bigger than 3\n");
    }
    
    return 0;
}

/*
Any value except 0 is true. if value is 0 then it is false
*/