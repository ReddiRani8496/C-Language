#include<stdio.h>
int main() {
    // char ch1,ch2;
    // scanf("%c %c",&ch1,&ch2);
    // printf("%c %c",ch1,ch2);

    char ch;
    int num;
    scanf("%c %d",&ch,&num);  // input - 1234 567
    printf("%c %d",ch,num);   // output - 1 234 , because, character will take single character and integer take number upto space
}

// input 1234
// output 1 2 
// because character will take only one character, remaining will be skipped