#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[50];
    int number;
    int age;
};

// Struct pointer as a function parameter //
void showStudentData(struct student *st){
    puts("\nStudent:");
    printf("Name: %s\n", st->name);
    printf("Number: %d\n", st->number);
    printf("Age: %d\n", st->age);
}

int main(){
    struct student st1 = {"Krishna", 5, 21};
    showStudentData(&st1);
}
