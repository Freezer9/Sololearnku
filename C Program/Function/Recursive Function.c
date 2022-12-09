#include<stdio.h>

int factorial(int);

int main() {
    int input;
    printf("Masukkan bilangan faktorial: ");
    scanf("%d", &input);
    fflush(stdin);
    printf("Faktorial dari %d adalah %d\n", input, factorial(input));
}

int factorial(int num) {
    if(num == 1)
        return 1;
    else
        return(num * factorial(num - 1));
} 