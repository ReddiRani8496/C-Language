#include<stdio.h>
#include<string.h>

struct book
{

    float price;

    int pages;

    char author[20];

};

int main() {

    struct book b1, *ptr;

    ptr = &b1;

    ptr->price = 50.78; // equivalent to *(ptr).price=50.78
    
    ptr->pages = 120;
    
    //b1.author="Joseph"; we can't assing value to string using =
    
    strcpy(ptr->author,"Joseph");
    
    printf("%f\n",ptr->price);
    
    printf("%d\n",ptr->pages);
    
    printf("%s",ptr->author);

}
