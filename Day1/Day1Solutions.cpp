#include <fstream>
#include "Day1.h"

using namespace std;

// The file input part is a bit clumsy :(
int day1Part1() {
    ifstream fileStream;
    int count{0};
    int t, prev;
    fileStream.open("..\\Day1\\input.txt");     // Change the path for your system

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

// Better approach also for part 1
int day1Part2(vector<int> arr) {
    int count{0};

    for (int i = 3; i < arr.size(); i++) {
        if (arr[i - 3] < arr[i]) {
            count++;
        }
    }

    return count;
}