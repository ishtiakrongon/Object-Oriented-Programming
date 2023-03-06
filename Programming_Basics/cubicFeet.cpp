#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const double GALLON_CUBIC_FOOT = 7.481;
    double gallons;

    cout << "Enter gallons: ";
    cin >> gallons;

    double cubicFeet = gallons / GALLON_CUBIC_FOOT;

    cout << gallons << " gallons is equivalent to " << cubicFeet 
         << " cubic feet." << "\n";

    return 0;

}