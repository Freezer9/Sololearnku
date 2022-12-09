#include <iostream>
#define MAX 20
using namespace std;

int main() {
    int ages[MAX];
    float min, max = 0;
    double total = 0, diskon = 0;

    for(int i = 0; i < 5; i++) {
        cin >> ages[i];
    }
    min = ages[0];
    
    for (int i = 0; i < 5; i++) {
        if(ages[i] < min)
            min = ages[i];
    }
    //your code goes here
    cout << min << endl;

    diskon = 50 * min / 100;

    cout << diskon << endl;

    total = 50 - diskon;
    
    cout << total << endl;

    return 0;
}