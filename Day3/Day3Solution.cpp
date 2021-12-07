#include "Day3Solution.h"

#include <fstream>
#include <stdlib.h>
using namespace std;

int day1Part1() {
    int oCount, zCount;
    string temp;
    string gamma = "";
    string epsilon;

    oCount = zCount = 0;

    fstream fInput("../Day3/input.txt");

    while (!fInput.eof()) {
        /* TODO: Invert the for loop
        fInput >> temp;

        // can be improved
        for (int i = 0; i < 12; i++) {
            if (temp[i] == '0') {
                zCount++;
            } else {
                oCount++;
            }
        }

        if(zCount > oCount) {
            gamma += '0';
        } else {
            gamma += '1';
        }

        oCount = zCount = 0;
        */
    }

    // take the compliment
    // TODO: strtoull
    for (int i = 0; i < 12; i++) {
        if (gamma[i] == '0') {
            epsilon += '1';
        } else {
            epsilon += '0';
        }
    }
}