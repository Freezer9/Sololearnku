#include<iostream>
using namespace std;

void passByValue(int x) {
    x = 99;
}

int main() {
    int arg = 13;
    passByValue(arg);

    return 0;
}