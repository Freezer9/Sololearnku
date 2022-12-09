#include <iostream>
using namespace std;

int main() {
    //your code goes here
    int seats;
    cin >> seats;
    
    if (seats >= 50) {
        cout << 50 - seats;
    }
    else if (seats <= 50) {
        cout << seats % 50;
    }
    
    return 0;
}