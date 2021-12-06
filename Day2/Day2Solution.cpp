#include "Day2Solution.h"
#include <fstream>

using namespace std;

int day2Part1() {
    int hor, ver;

    hor = ver = 0;

    fstream fInput("..\\Day2\\input.txt");

    while (!fInput.eof()) {
        string direction;
        fInput >> direction;
        int temp;
        fInput >> temp;

        if (direction == "up") {
            ver -= temp;
        } else if (direction == "down") {
            ver += temp;
        } else if (direction == "forward") {
            hor += temp;
        }
    }


    return (hor * ver);
}