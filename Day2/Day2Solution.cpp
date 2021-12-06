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

int day2Part2() {
    int temp;

    // Coordinates
    int hor, ver, aim;

    aim = ver = hor = 0;

    fstream fInput("..\\Day2\\input.txt");

    while (!fInput.eof()) {
        string direction;
        fInput >> direction;
        fInput >> temp;

        if (direction == "up") {
            aim -= temp;
        } else if (direction == "down") {
            aim += temp;
        } else if (direction == "forward") {
            hor += temp;
            ver += (temp * aim);
        }
    }


    return (hor * ver);
}
