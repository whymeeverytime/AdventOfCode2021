#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int day1Part1() {
    ifstream fileStream;
    int t = 0;
    int count = 0;
    int prev;
    fileStream.open("..\\input.txt");

    fileStream >> prev;

    while (!fileStream.eof()) {

        fileStream >> t;

        if (prev < t) {
            count++;
        }

        prev = t;
    }

    return count;
}

int day1Part2(vector<int> arr) {
    int count = 0;

    for (int i = 3; i < arr.size(); i++) {
        if (arr[i - 3] < arr[i]) {
            count++;
        }
    }

    return count;
}

int main() {

    ifstream fileStream;
    fileStream.open("..\\input.txt");
    vector<int> dataVec;
    int temp;

    while (!fileStream.eof()) {
        fileStream >> temp;

        dataVec.push_back(temp);
    }

    cout << day1Part2(dataVec);
    cout << day1Part1();
    return 0;
}
