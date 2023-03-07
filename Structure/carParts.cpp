#include <iostream>
#include <string>
using namespace std;

struct Car {

    string carName;
    int modelNumber;
    float carPrice;

};


int main() {

    Car c1;     // Defining a structure variable

    c1.carName = "Audi";
    c1.modelNumber = 6244;
    c1.carPrice = 2700069.26;

    cout << "Car name " << c1.carName << endl;
    cout << "Model Number " << c1.modelNumber << endl;
    cout << "Car Price " << c1.carPrice << endl;

}