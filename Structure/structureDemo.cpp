#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    int age;
    float height;
};

int main() {
    Person p1 = {"Rongon", 28, 5.8};

    cout << p1.name << " is " << p1.age << " years old and " << p1.height
         << " feet tall." << endl;
    
    return 0;
}