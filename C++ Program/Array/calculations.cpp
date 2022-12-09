#include <iostream>
using namespace std;

int main() {
    double items[] = {500, 12.4, 94, 45, 3, 81, 1000.9, 85, 90, 1, 35};
    float sum, nilai, disc;

    cin >> nilai;
    //your code goes here
    for(int i = 0; i < 11; i++) {
        disc = items[i] - items[i] * nilai/ 100;
        cout << disc << " "; 
    }
    
    return 0;
}
