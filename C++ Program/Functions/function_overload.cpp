#include <iostream>
#include <string>
using namespace std;

//complete the function
void add(int a, int b) {
    cout <<  a + b << endl;
}
//overload it to sum doubles
void add(double num1, double num2) {
    cout << num1 + num2 << endl;
}

int main() {
    
    //calling
    add(5, 6);
    add(1.2, 6.5);
    
    return 0;
}