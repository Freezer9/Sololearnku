#include<stdio.h>
#include<stdlib.h>

void init_array(void);
void increase_array(void);
void add_element(void);
void display_array(void);

typedef struct {
    int *elements;
    int size;
    int cap;
} dyn_array;

dyn_array arr;

int main() {
    init_array();
    increase_array();
    add_element();
}

void init_array(void) {
    /* Initialize Array */
    arr.size = 0;
    arr.elements = calloc(1, sizeof(*arr.elements) );
    arr.cap = 1;
}

void increase_array(void) {
    /* Expand by More Elements*/
    arr.elements = realloc(arr.elements, (5 + arr.cap) * sizeof(*arr.elements));
    if (arr.elements != NULL)
        arr.cap += 5;
}

void add_element(void) {
    /* Adding an elemnt to array increases its size */
    if (arr.size < arr.cap) {
        arr.elements[arr.size] = 50;
        arr.size++;
    } 
    else
        printf("Need to expand the array.");
}