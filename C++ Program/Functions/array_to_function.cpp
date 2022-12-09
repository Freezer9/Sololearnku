#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    int myArr[3] = {42, 33, 88};
    printArray(myArr, 3);
}