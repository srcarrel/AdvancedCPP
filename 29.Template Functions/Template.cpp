//Name: Template.cpp

#include <iostream>
using namespace std;

template<typename T>
void print(T n) {
    cout << n << endl;
}

int main() {
    print<string>("Hello");

    return 0;
}
