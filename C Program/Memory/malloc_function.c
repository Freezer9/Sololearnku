#include<stdlib.h>

int main(){
    int *ptr;
    ptr = malloc(10 * sizeof(*ptr));

    if (ptr != NULL) {
        *(ptr + 2) = 50; 
    }
}