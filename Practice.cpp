#include <iostream>
using namespace std;

int main() {

    int arr[] = {2, 3, 4};

    int N = sizeof(arr) / sizeof(arr[0]);

    cout << N << endl;

    return 0;
}