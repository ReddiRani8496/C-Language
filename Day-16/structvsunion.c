#include<stdio.h>
#include<string.h>

typedef struct book
{

    float price;

    int pages;

    char author[20];

} book;

union book1 {
    float price;

    int pages;

    char author[20];
} book1;

int main() {
    printf("Size of structure:%ld\n",sizeof(book));
    printf("Size of union: %ld\n", sizeof(book1));
}