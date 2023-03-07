#include <iostream>
using namespace std;

int main() {
    
    long dividend, divisor;
    char checkYorN;

    do {
        cout << "Enter dividend: ";
        cin >> dividend;
        cout << "Enter divisor: ";
        cin >> divisor;
        cout << "Quotient is " << dividend / divisor;
        cout << "Remainder is " << dividend % divisor;

        cout << "\nDo you want to run again? (y/n): ";
        cin >> checkYorN;
    } while (checkYorN != 'n');

    return 0;
}