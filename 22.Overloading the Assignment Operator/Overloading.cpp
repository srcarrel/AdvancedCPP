//Name: Overloading.cpp

#include <iostream>
using namespace std;

class Test {
    private:
        int id;
        string name;

    public:
        Test(): id(0), name("") {

        }

        Test(int id, string name): id(id), name(name) {

        }

        void print() {
            cout << id << ": " << name << endl;
        }

        const Test &operator=(const Test &other) {
            cout << "Assignment running" << endl;

            id = other.id;
            name = other.name;

            return *this;
        }

        Test(const Test &other) {
            cout << "Copy constructor running" << endl;
            id = other.id;
            name = other.name;
        }
};

int main() {

    Test test1(10, "Mike");
    test1.print();

    Test test2(20, "Bob");
    test2 = test1;

    test2.print();

    Test test4 = test1;
    test4.print();

    return 0;
}
