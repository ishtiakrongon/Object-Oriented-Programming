#include <iostream>
using namespace std;

// Demonstrates remainder operator

int main() {

    int x, y;

    cout << "Enter 1st Value: " << endl;
    cin >> x;

    cout << "Enter 2nd value: " << endl;
    cin >> y;

    int result = x % y; // remainder operator -> %

    cout << "Result is: " << static_cast<double>(result) << endl;

    return 0;
}
