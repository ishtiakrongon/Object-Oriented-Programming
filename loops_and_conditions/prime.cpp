// Prime numbers are integers that divisible only by themselves and 1.
// The first few prime numbers are 2, 3, 4, 5, 7, 11, 13, 17.

#include <iostream>
// #include "process.h"    // for exit()
using namespace std;

int main() {
    
    unsigned long n, j;
    char ch;

    do{
        cout << "Enter a number: ";
        cin >> n;   // get the number to test

        for(j = 2; j <= n / 2; j++) {

            if(n % j == 0)
            {
                cout << "It's not a prime number; divisible by "
                     << j << endl;
                break;
            }
            else
            {
                cout << "It's a prime number." << endl;
                break;
            }
        }

        cout << "Do you want to run again? (y/n): ";
        cin >> ch;

    } while(ch != 'n');
    
    return 0;
}