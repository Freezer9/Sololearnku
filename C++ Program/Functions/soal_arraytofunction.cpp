#include <iostream>
#include <string>
using namespace std;

//complete the function
void winners(string list[], int size, int jarak) {
    for (int i = 0; i < size; i++) {
        if(i == 0)
            continue;
        else if(i % jarak == 0) 
            cout << list[i-1] << endl;
        else
            continue;
    }
}

int main() {

    string customers[] = {"Alice", "Bob", "Rayan", "Emma", "Ann", "Bruce", "Synthia", "Daniel", "Richard", "Sam", "Nick", "Mary", "Paul"};

    //getting the lucky number as input
    int n;
    cin >> n;
    //call function
    winners(customers, 13, n);
    
    return 0;
}