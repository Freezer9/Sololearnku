#include<iostream>
using namespace std;

int main() {
    int *p = new int; // request memory
    *p = 5; // store value

    cout << *p << endl; // use value

    delete p; // free up memory
    // now p is a dangling pointer

    p = new int; // reuse for a new addres

    // Dynamic Memory
    int *p = NULL; // Pointer initialized with null
    p = new int[20]; // Request memory
    delete [] p; // Delete array pointed to by p
}