#include<iostream>
using namespace std;

// Function Declaration
void printSomething(int);
int timesTwo(int);

int main() {
    printSomething(42);

    return 0;
}

// Function definition
void printSomething(int x) {
    // Function printSomething
    cout << "Hi there!" << endl;
    cout << x << endl;
    
    // Function timesTwo
    cout << timesTwo(8) << endl;

    cout << timesTwo(5) << endl;
    
    cout << timesTwo(42) << endl;
}

int timesTwo(int x) {
    return x*2;
}