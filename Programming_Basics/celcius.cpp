#include <iostream>
using namespace std;

int main() {
    double celcius, fahrenheit;

    cout << "Enter temperature in Celcius: ";
    cin >> celcius;

    fahrenheit = (celcius * 5 / 9) + 32;

    cout << celcius << "Celcius is quivalent to " << fahrenheit << endl;

    return 0;
}