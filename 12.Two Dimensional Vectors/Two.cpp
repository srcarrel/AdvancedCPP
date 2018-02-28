//Name: Two.cpp

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector< vector<int> > grid(12, vector<int>(12, 0));

    for(int row=0; row < grid.size(); row++) {
        for(int col=0; col < grid[row].size(); col++) {
            grid[row][col] = (row + 1) * (col + 1);
        }
    }

    for(int row=0; row < grid.size(); row++) {
        for(int col = 0; col < grid[row].size(); col++) {
            cout << grid[row][col] << '\t' << flush;
        }
        cout << endl;
    }

    return 0;
}
