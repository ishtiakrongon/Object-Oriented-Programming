#include <iostream>
using namespace std;

void repchar(char, int); // Function prototype declaration

int main() {

    char signVar;
    int numb;

    cout << "Enter your desired sign(- or *): ";
    cin >> signVar;

    cout << "Enter how many signs do you want: ";
    cin >> numb;
    
    //------------------------------------------------------------

    // calling function
    repchar(signVar, numb);

    cout << "Data Type\t\tRange" << endl;

    repchar(signVar, numb);

    cout << "Char\t\t-128 to 127" << endl;
    cout << "Short\t\t-32,768 to 32, 767" << endl;
    cout << "Int\t\tSystem dependent" << endl;
    cout << "Double\t\t-2,147,483,648 to 2,147,483,647" << endl;

    repchar(signVar, numb);

    return 0;
}

void repchar(char ch, int n) {

    for(int i = 0; i < n; i++) {
        cout << ch;
    }

    cout << endl;

}