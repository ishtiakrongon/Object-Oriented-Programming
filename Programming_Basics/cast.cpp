// tests signed and unsigned integers

#include <iostream>
using namespace std;

int main() {

    int intVar = 15E8;
    
    //intVar = (intVar * 10) / 10;
    //cout << "intVar = " << intVar << endl;

    intVar = (static_cast<double>(intVar) * 10) / 10;
    cout << "intVar = " << intVar << endl;

    return 0;

}