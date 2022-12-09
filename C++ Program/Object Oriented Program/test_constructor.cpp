#include <iostream>
#include <string>
using namespace std;

class Painting {
    private:
        string name;
    public:
        //define the constructor
        Painting(string nm) {
            name = nm;
            cout << nm;
        }
        string getName() {
            return name;
        }
};

int main() {
    string name;
    cin >> name;
    Painting painting(name);
    return 0;
}