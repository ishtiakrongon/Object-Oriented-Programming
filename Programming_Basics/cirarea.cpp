#include <iostream>
using namespace std;

int main() {

    float rad;
    const float PI = 3.14159F;  // Type constant value

    cout << "Enter radius of circle: " << "\n";
    cin >> rad; // get radius

    float area = PI * rad * rad;
    cout << "The area of the circle is " << area << endl;

    return 0;

}