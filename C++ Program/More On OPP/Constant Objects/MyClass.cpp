#include "MyClass.h"
#include<iostream>
using namespace std;

void MyClass::myPrint() const {
    cout << "Hello" << endl;
}

int main() {
    const MyClass obj;
    obj.myPrint();
} 
int main() {}