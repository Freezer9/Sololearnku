#include <iostream>
using namespace std;

/*complete the function to multiple the megabytes,
  don't forget to set the parameter*/
int promotion(int *mb) {
    
    //taking multiplier as input
    int multiplier;
    cin >> multiplier;
    *mb *= multiplier;
    
    return *mb;
}

int main() {
    //getting initial count of megabytes
    int megabytes;
    cin >> megabytes;
    
    //printing the count of megabytes before the promotion
    cout << "Before the promotion: " << megabytes << endl;
    
    //complete the function call
    promotion(&megabytes);
    
    //printing the count of megabytes after the promotion
    cout << "After the promotion: " << megabytes << endl;
    
    return 0;
}