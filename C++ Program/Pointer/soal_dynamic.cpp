#include <iostream>
#define MAX 100
using namespace std;


int main() {
    int n, nums[MAX], nilai;
    cin >> n; //size of the array

    //your code goes here
    int max = nums[MAX];
    int min = 0;
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
        if(nums[i] > max)
            max = nums[i];
        else
            min = nums[i];
    }
    cout << min << endl;

    return 0;
}