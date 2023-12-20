#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct book
{

    float price;

    int pages;

    char author[20];

} book;

book fun();

int main() {

     book  b1;

     b1 = fun();
    
     printf("%f\n",b1.price);
    
    printf("%d\n",b1.pages);
    
    printf("%s",b1.author);
    

}

book fun() {

    book b1;

    b1.price = 50.78; 
    
    b1.pages = 120;
    
    strcpy(b1.author,"Joseph"); 
    return b1;
   
}
