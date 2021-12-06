#include <iostream>
#include <fstream>
#include <vector>
#include "Day1\Day1.h"
#include "Day2\Day2Solution.h"
using namespace std;

int main() {

    /* Day 1 Solution
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
     */


    printf("The solution for the 2nd day part 1 is: %d \n", day2Part1());
    printf("The solution for the 2nd day part 2 is: %d \n", day2Part2());
    return 0;
}
