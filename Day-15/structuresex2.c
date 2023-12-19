#include<stdio.h>
#include<string.h>

struct book
{

    float price;

    int pages;

    char author[20];

}b1; // b1 is called struct variable

int main() {

    b1.price = 50.78;

    b1.pages = 120;

    //b1.author="Joseph"; we can't assing value to string using =

    strcpy(b1.author,"Joseph");

    printf("%f\n",b1.price);

    printf("%d\n",b1.pages);

    printf("%s",b1.author);
    
}
