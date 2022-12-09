#include<stdio.h>
#include<string.h>

union id {
    int id_num;
    char name[20];
};

void set_id(union id *item) {
    item->id_num = 42;
}

void show_id(union id item) {
    printf("ID is %d", item.id_num);
}

