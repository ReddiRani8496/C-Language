#include<stdio.h>
#include<string.h>

union book
{

    float price;

    int pages;

    char author[20];

};

int main() {

    union book b1; 

    b1.price = 50.78;
    printf("price: %f\n",b1.price);
    
    b1.pages = 120;
    printf("pages: %d\n",b1.pages);
    printf("price: %f\n",b1.price); //  garbage value will be printed, when new value assigned for union variable, previous union variable data will be gone
   
    
    strcpy(b1.author,"Joseph");
     printf("author: %s",b1.author);
    printf("price: %f\n",b1.price); //  garbage value will be printed, when new value assigned for union variable, previous union variable data will be gone
     printf("pages: %d\n",b1.pages); //  garbage value will be printed, when new value assigned for union variable, previous union variable data will be gone
    
}
