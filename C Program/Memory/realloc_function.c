#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    ptr = malloc(10 * sizeof(*ptr));
    if (ptr != NULL) {
        *(ptr + 2) = 50;
    }
    ptr = realloc(ptr, 100 * sizeof(*ptr));
    *(ptr + 30) = 75;

    /* Tebak Output */
    int *arr = malloc(sizeof(int));
    *arr = 13;
    arr = realloc(arr, 2*sizeof(int));
    *(arr + 1) = *arr;
    printf("%d", *(arr + 1));
}