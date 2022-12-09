#include<iostream>
#include "MyClass.h"
using namespace std;

MyClass::MyClass() {
    cout << "Constructor" << endl;
}

MyClass::~MyClass() {
    cout << "Destructor" << endl;
}

int main() {
    MyClass obj;

    return 0;
}
