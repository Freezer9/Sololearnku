#include<stdio.h>

union val {
    int int_num;
    float fl_num;
    char str[20];
};

union type {
    int i_val;
    float f_val;
    char c_val; 
};

int main() {
    union val nums[10];
    union type arr[3];
    int k;

    for (k = 0; k < 10; k++) {
        nums[k].int_num = k;
    }

    for (k = 0; k < 10; k++) {
        printf("%d ", nums[k].int_num);
    } 

    arr[0].i_val = 42;
    arr[1].f_val = 3.14;
    arr[2].c_val = 'x';

    printf("\n%i, %f, %c", arr[0].i_val, arr[1].f_val, arr[2].c_val);
}




