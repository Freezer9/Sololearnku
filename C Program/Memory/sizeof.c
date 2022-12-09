#include<stdio.h>

int main(){
    int x, arr[10];
    printf("%d\n", sizeof(x));
    printf("%d", sizeof(arr));
}

/* 
malloc(bytes) Returns a pointer to a contiguous block of memory that is of size bytes.

calloc(num_items, item_size) Returns a pointer to a contiguous block of memory that has num_items items, each of size item_size bytes. Typically used for arrays, structures, and other derived data types. The allocated memory is initialized to 0.

realloc(ptr, bytes) Resizes the memory pointed to by ptr to size bytes. The newly allocated memory is not initialized.

free(ptr) Releases the block of memory pointed to by ptr.
*/