#include <iostream>
using namespace std;

int main()
{
    int choice = 0;
    cin >> choice;
    /*1 - Latte
    2 - Americano
    3 - Espresso
    4 - Cappuccino
    5 - Macchiato */
    
    //your code goes here
    switch (choice) {
        case 1:
        cout << "Latte\n";
        break;
        case 2:
        cout << "Americano\n";
        break;
        case 3:
        cout << "Espresso\n";
        break;
        case 4:
        cout << "Cappuccino\n";
        break;
        case 5:
        cout << "Macchiato\n";
        break;
        default:
        cout << "Invalid!\n";
        break;
    } 
    return 0;
}