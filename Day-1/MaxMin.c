#include<stdio.h>
#include<limits.h> // max and min values library
int main() {

    int max = INT_MAX;

    int min = INT_MIN;

    printf("%d %d",max,min);

    max = max+1;  // integer overflow happens and stores negative max value

    printf("%d",max); 

    return 0;

}