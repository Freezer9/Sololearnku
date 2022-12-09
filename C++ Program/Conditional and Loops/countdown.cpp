#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    //your code goes here
    for(int i = n; i > 0; i--) {
        if(i % 5 == 0)
            cout << "Beep" << endl;
        cout << i << endl;
    }
    
    return 0;
}