#include <iostream>
#include <fstream>
#include <vector>
#include "Day1\Day1.h"
using namespace std;

int main() {

    ifstream fileStream;
    fileStream.open("..\\Day1\\input.txt");
    vector<int> dataVec;
    int temp;

    while (!fileStream.eof()) {
        fileStream >> temp;

        dataVec.push_back(temp);
    }

    cout << day1Part2(dataVec) << endl;
    cout << day1Part1() << endl;
    return 0;
}
