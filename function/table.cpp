// Demonstrates simple function
#include <iostream>
#include <iomanip>
using namespace std;

void starline();    // function declaration prototype

int main() {

    starline();     // calling function

    cout << setw(10) << "Data Type" << setw(35) << "Range" << endl;

    starline();

    cout << setw(10) << "Char" << setw(35) << "-128 to 127" << endl;
    cout << setw(10) << "Short" << setw(35)
         << "-32,768 to 32,767" << endl;
    cout << setw(10) << "Int" << setw(35) << "System dependent" << endl;
    cout << setw(10) << "Long" << setw(35) 
         << "-2,147,483,648 to 2,147,483,647" << endl;

    starline();

    return 0;
}

// CREATING A FUNCTION

void starline() {

    for(int j = 0; j < 51; j++) {
        cout << '*';
    }

    cout << endl;

}

