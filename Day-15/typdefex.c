#include<stdio.h>
#include<string.h>

typedef struct Book
{

    float price;

    int pages;

    char author[20];

} book; // book is the alias name of struct Book

int main() {

    book b1; // by using typedef we can directly create variable using alias name and varible, no need to use struct
   
    b1.price = 50.78;

    b1.pages = 120;

    //b1.author="Joseph"; we can't assing value to string using =

    strcpy(b1.author,"Joseph");

    printf("%f\n",b1.price);

    printf("%d\n",b1.pages);

    printf("%s",b1.author);
    
}
