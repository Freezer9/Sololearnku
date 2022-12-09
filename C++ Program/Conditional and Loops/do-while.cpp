#include <iostream>
using namespace std;

int main()
{
    int purchaseAmount = 0, item = 0;
    double totalPrice;
    
    do {
        cin >> purchaseAmount;
        totalPrice = purchaseAmount * 0.15;
        cout << totalPrice << endl;
        item++;
    } while(item < 3);
    
    return 0;
}