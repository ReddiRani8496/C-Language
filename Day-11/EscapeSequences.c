#include<stdio.h>
int main() {
    printf("helloworld\rhappy\n"); // carriage return
    printf("hello\tworld\n"); // tab space takes 8 spaces
    printf("hello\nworld\n"); // new line
    printf("hello\bworld\n"); // backspace
    printf("hello\fworld\n"); // form feed
    printf("hello\\world\n"); // back slash
    printf("hello\'world\n"); // single quotes
    printf("hello\"world\n");// double quotes
    printf("\vhello"); //vertical tab space
}