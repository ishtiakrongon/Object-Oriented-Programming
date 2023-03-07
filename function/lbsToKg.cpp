// Unit Conversion
// Pounds to kilograms

#include <iostream>
using namespace std;

float lbsTokg(float);       // function prototyping

int main() {

    float pounds, kilograms;

    cout << "Enter your weight in pounds: ";
    cin >> pounds;

    kilograms = lbsTokg(pounds);

    cout << "Your weight in kilograms is: " << kilograms << endl;

    return 0;
}

float lbsTokg(float pounds) {

    const float CONST_VAR = 0.453592;

    float kg = CONST_VAR * pounds;

    return kg;
}
