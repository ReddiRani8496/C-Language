#include<stdio.h>
#include<limits.h>
int main() {
    char max = CHAR_MAX;
    char min = CHAR_MIN;
    printf("%d \n %d\n",max,min);
    long longMax = LONG_MAX;
    long longMin = LONG_MIN;
    printf("%ld \n %ld\n",longMax,longMin);

    int signedCharMax = SCHAR_MAX;
    int singnedCharMin = SCHAR_MIN;
    printf("%d\n%d\n",signedCharMax,singnedCharMin);

    int unsignedCharMax = UCHAR_MAX;
    printf("%d",unsignedCharMax);
    return 0;
}