#include <iostream>
using namespace std;

int linearSearch(int arr[], int N, int x);     // Declaring protoype

int main() {

    int arr[] = {2, 5, 7, 9, 11, 13, 15}; // Declare an array
    int x = 9;      //target variable

    int N = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr, N, x);

    if (result != -1) {
        cout << "Element is present at index " << result << endl; 
    }
    else {
        cout << "Element is not present at index.";
    }

    return 0;    
}


int linearSearch(int arr[], int N, int x) {

    

    for(int i = 0; i < N; i++) {

        if(arr[i] == x) {
            return i;
        }
    }

    return -1;


}