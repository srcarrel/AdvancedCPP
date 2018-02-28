//Name: Parsing.cpp
//g++ -std=c++11 required

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    ifstream input;
    string filename = "stats.txt";

    input.open(filename);

    if(!input.is_open()) {
        return 1;
    }

    while(input) {
        string line;

        getline(input, line, ':');

        int population;
        input >> population;

        //input.get();
        input >> ws;

        if(!input) {
            break;
        }

        cout << "x" << line << "x" << " -- x" << population << "x" << endl;
    }

    input.close();

    return 0;
}
