#include <iostream>
using namespace std;

int main() {
    
    string arr[3][3] = {
        {"Python", "JS", "C++"},
        {"PHP", "SQL", "Java"},
        {"C#", "Swift", "Kotlin"},
    };
    // your code goes here
    for(int k = 0; k < 3; k++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[k][j] << endl;
        }
    }
    
    return 0;
}