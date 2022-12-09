#include<iostream>
using namespace std;

class MyClass {
    private:
    int myData;
    public:
    MyClass(int arg) {
        myData = arg;
    }
    int getNumber() {
        cout << myData;
    }
};

int main() {
    MyClass obj(14);
    obj.getNumber();
}