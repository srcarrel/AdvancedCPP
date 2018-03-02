//Name: Complex.cpp

#include <iostream>
#include "Complex.h"
using namespace std;
using namespace tutorial;

int main() {
    Complex c1(3, 2);
    Complex c2(3, 3);

    if (c1 == c2) {
        cout << "Equal" << endl;
    } else {
        cout << "Not Equal" << endl;
    }

    return 0;
}
