// Demonstrates nested structures

#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

struct Room {
    Distance length;
    Distance width;
};

int main() {
    
    Room dining;    // Defining a room

    dining.length.feet = 13;    // assign values to room
    dining.length.inches = 6.5;

    dining.width.feet = 10;
    dining.width.inches = 0.0;

    // findout total length & width

    float l = dining.length.feet + (dining.length.inches / 12);
    float w = dining.width.feet + (dining.width.inches / 12);

    // Calculating Area = Length X width

    cout << "Dining room area is " << l * w
         << " square feet\n";

    return 0;
}