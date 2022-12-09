#include<iostream>
using namespace std;

int main() {
    int myArr[5];

    for (int i = 0; i < 5; i++)
    {
        myArr[i] = 42;
        cout << i << ": " << myArr[i] << endl;
    }
    
}