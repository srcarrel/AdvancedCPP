//Name: Complex.cpp

#include <iostream>
#include "Complex.h"
using namespace std;
using namespace tutorial;

int main() {

    Complex c1(2, 3);
    Complex c2(c1);

    Complex c3;

    c3 = c2;

    cout << c2 << ": " << c3 << endl;

    return 0;
}
