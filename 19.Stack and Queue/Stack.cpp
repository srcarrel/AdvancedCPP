//Name: Stack.cpp

#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Test {
    private:
        string name;

    public:
        Test(string name) : name(name) {}

        ~Test() {  }

        void print() {
            cout << name << endl;
        }
};

int main() {
    //LIFO
    stack<Test> testStack;

    testStack.push(Test("Mike"));
    testStack.push(Test("John"));
    testStack.push(Test("Sue"));

    Test test1 = testStack.top();
    test1.print();

    testStack.pop();
    Test test2 = testStack.top();
    test2.print();

    return 0;
}
