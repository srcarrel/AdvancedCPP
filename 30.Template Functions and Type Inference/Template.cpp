#include <iostream>
using namespace std;

template<class T>
void print(T n) {
    cout << "Template version: " << n << endl;
}

void print(int value) {
    cout << "Non-Template version: " << value << endl;
}

int main() {
    print<string>("Hello");
    print<int>(5);

    print("Hi there");

    print(6);

    print<>(8);

    return 0;
}
