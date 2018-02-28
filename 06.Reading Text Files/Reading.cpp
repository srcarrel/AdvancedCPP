//Name: Reading.cpp
//g++ -std=c++11 required

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile;
    string inFileName = "test.txt";

    inFile.open(inFileName);

    if(inFile.is_open()){
        string line;
        
        while(inFile){
            getline(inFile, line);
            cout << line << endl;
        }

        inFile.close();
    }else{
        cout << "Cannot open file: " << inFileName << endl;
    }

    return 0;
}
