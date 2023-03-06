// Demonstrates sqrt() library function
#include <iostream>
#include <cmath>    // for sqrt
using namespace std;

int main() {

    double number, answer;      // sqrt() requires type double

    cout << "Enter a number: ";
    cin >> number;  // get the number
    answer = sqrt(number);
    cout << "Square root is " << answer << endl;

    return 0;
}