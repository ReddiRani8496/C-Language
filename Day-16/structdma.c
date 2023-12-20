#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct book
{

    float price;

    int pages;

    char author[20];

} book;

int main() {

     book  *ptr;

    ptr = (book *) malloc(3*sizeof(book));

    ptr->price = 50.78; // equivalent to *(ptr).price=50.78
    
    ptr->pages = 120;
    
    //b1.author="Joseph"; we can't assing value to string using =
    
    strcpy(ptr->author,"Joseph");
    
    printf("%f\n",ptr->price);
    
    printf("%d\n",ptr->pages);
    
    printf("%s",ptr->author);

}
