#include<stdio.h>
#include<string.h>

int main()
{
    char input[10];
    int num;

    printf("Enter a number: ");
    gets(input);
    num = atoi(input);

    return 0;
}