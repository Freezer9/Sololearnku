#include <iostream>
using namespace std;

int isPalindrome(int x) {
    //complete the function
    int digit, num, rev = 0;
    num = x;
    while (num > 0) { 
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }
    
    if(rev == x)
        return 0;
    else
        return 1;
}

int main() {
    int n;
    cin >> n;
    
    if(isPalindrome(n) == 0) {
        cout << n <<" is a palindrome";
    }
    else {
        cout << n <<" is NOT a palindrome";
    }
    return 0;
}