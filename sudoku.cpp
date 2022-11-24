/*
    

*/

#include <iostream>
#include <random>
#include <vector>
#include <thread>
#include <chrono>

const char collectionSize = 9;

char firstLine[collectionSize]{};
char secondLine[collectionSize]{};
char thirdLine[collectionSize]{};
char fourthLine[collectionSize]{};

char firstRow[collectionSize]{};
char secondRow[collectionSize]{};
char thirdRow[collectionSize]{};
char fourthRow[collectionSize]{};
char fifthRow[collectionSize]{};
char sixthRow[collectionSize]{};
char seventhRow[collectionSize]{};
char eighthRow[collectionSize]{};
char ninthRow[collectionSize]{};

char firstBox[collectionSize]{};
char secondBox[collectionSize]{};
char thirdBox[collectionSize]{};
char fourthBox[collectionSize]{};
char fifthBox[collectionSize]{};
char sixthBox[collectionSize]{};

bool eraseLine = false;
/*bool notOk0 = false;
bool notOk1 = false;
bool notOk2 = false;
bool notOk3 = false;
bool notOk4 = false;
bool notOk5 = false;
bool notOk6 = false;
bool notOk7 = false;
bool notOk8 = false;*/
bool fastForward = false;

bool matchCheck(char number, char collection[], char maxIndex);
void gridParser(char grid[][9]);
void arrayPrinter(char grid[][9]);
void arrayPrinter2(char grid[][9]);

int main()
{

    std::thread thread;
    
    char grid[9][9]{};

    gridParser(grid); 
}

void gridParser(char grid[][9]) {

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 9);
    
    /*for (int i = 0; i < 9; i++) {
        firstLine[i] = 0;
    }

    for (int i = 0; i < 9; i++) {
        secondLine[i] = 0;
    }

    for (int i = 0; i < 9; i++) {
        thirdLine[i] = 0;
    }

    for (int i = 0; i < 9; i++) {
        fourthLine[i] = 0;
    }

    for (int i = 0; i < 9; i++) {
        firstRow[i] = 0;
    }

    for (int i = 0; i < 9; i++) {
        secondRow[i] = 0;
    }

    for (int i = 0; i < 9; i++) {
        thirdRow[i] = 0;
    }

    for (int i = 0; i < 9; i++) {
        fourthRow[i] = 0;
    }

    for (int i = 0; i < 9; i++) {
        fifthRow[i] = 0;
    }

    for (int i = 0; i < 9; i++) {
        sixthRow[i] = 0;
    }

    for (int i = 0; i < 9; i++) {
        seventhRow[i] = 0;
    }

    for (int i = 0; i < 9; i++) {
        eighthRow[i] = 0;
    }

    for (int i = 0; i < 9; i++) {
        ninthRow[i] = 0;
    }

    for (int i = 0; i < 9; i++) {
        firstBox[i] = 0;
    }

    for (int i = 0; i < 9; i++) {
        secondBox[i] = 0;
    }

    for (int i = 0; i < 9; i++) {
        thirdBox[i] = 0;
    }

    for (int i = 0; i < 9; i++) {
        fourthBox[i] = 0;
    }

    for (int i = 0; i < 9; i++) {
        fifthBox[i] = 0;
    }

    for (int i = 0; i < 9; i++) {
        sixthBox[i] = 0;
    }*/

    /*for (int i = 0; i < 9; i++) {
        for (int q = 0; q < 9; q++) {
            grid[i][q] = 0;
        }
    }*/

    /*fastForward = true;*/

    grid[0][0] = distr(gen); firstLine[0] = grid[0][0]; firstBox[0] = grid[0][0]; firstRow[0] = grid[0][0]; arrayPrinter(grid);

    grid[0][1] = distr(gen); arrayPrinter(grid);
    while (matchCheck(grid[0][1], firstLine, 1) || matchCheck(grid[0][1], firstBox, 1))
    {
        grid[0][1] = distr(gen); arrayPrinter(grid);
    }
    firstLine[1] = grid[0][1]; firstBox[1] = grid[0][1]; secondRow[0] = grid[0][1]; 
    

    grid[0][2] = distr(gen); arrayPrinter(grid);
    while (matchCheck(grid[0][2], firstLine, 2) || matchCheck(grid[0][2], firstBox, 2))
    {
        grid[0][2] = distr(gen); arrayPrinter(grid);
    }
    firstLine[2] = grid[0][2]; firstBox[2] = grid[0][2]; thirdRow[0] = grid[0][2];
    

    grid[0][3] = distr(gen); arrayPrinter(grid);
    while (matchCheck(grid[0][3], firstLine, 3))
    {
        grid[0][3] = distr(gen); arrayPrinter(grid);
    }
    firstLine[3] = grid[0][3];  secondBox[0] = grid[0][3]; fourthRow[0] = grid[0][3];
    

    grid[0][4] = distr(gen); arrayPrinter(grid);
    while (matchCheck(grid[0][4], firstLine, 4) || matchCheck(grid[0][4], secondBox, 1))
    {
        grid[0][4] = distr(gen); arrayPrinter(grid);
    }
    firstLine[4] = grid[0][4];  secondBox[1] = grid[0][4]; fifthRow[0] = grid[0][4];
    

    grid[0][5] = distr(gen); arrayPrinter(grid);
    while (matchCheck(grid[0][5], firstLine, 5) || matchCheck(grid[0][5], secondBox, 2))
    {
        grid[0][5] = distr(gen); arrayPrinter(grid);
    }
    firstLine[5] = grid[0][5];  secondBox[2] = grid[0][5]; sixthRow[0] = grid[0][5];
   

    grid[0][6] = distr(gen); arrayPrinter(grid);
    while (matchCheck(grid[0][6], firstLine, 6))
    {
        grid[0][6] = distr(gen); arrayPrinter(grid);
    }
    firstLine[6] = grid[0][6]; thirdBox[0] = grid[0][6]; seventhRow[0] = grid[0][6];
    

    grid[0][7] = distr(gen); arrayPrinter(grid);
    while (matchCheck(grid[0][7], firstLine, 7) || matchCheck(grid[0][3], thirdBox, 1))
    {
        grid[0][7] = distr(gen); arrayPrinter(grid);
    }
    firstLine[7] = grid[0][7]; thirdBox[1] = grid[0][7]; eighthRow[0] = grid[0][7];
    
    

    grid[0][8] = distr(gen); arrayPrinter(grid);
    while (matchCheck(grid[0][8], firstLine, 8) || matchCheck(grid[0][8], thirdBox, 2))
    {
        grid[0][8] = distr(gen); arrayPrinter(grid);
    }
    thirdBox[2] = grid[0][8]; ninthRow[0] = grid[0][8];
    
    

    do {
        eraseLine = false;
        secondLine[0], secondLine[1], secondLine[2], secondLine[3], secondLine[4], secondLine[5], secondLine[6], secondLine[7], secondLine[8] = 0;
        firstBox[3], firstBox[4], firstBox[5], secondBox[3], secondBox[4], secondBox[5], thirdBox[3], thirdBox[4], thirdBox[5] = 0;
        firstRow[1], secondRow[1], thirdRow[1], fourthRow[1], fifthRow[1], sixthRow[1], seventhRow[1], eighthRow[1], ninthRow[1] = 0;
        char iterationCount = 0;

        grid[1][0] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[1][0], firstBox, 3) || matchCheck(grid[1][0], firstRow, 1))
        {
            grid[1][0] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }

        secondLine[0] = grid[1][0]; firstBox[3] = grid[1][0]; firstRow[1] = grid[1][0];

        iterationCount = 0;

        grid[1][1] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[1][1], secondLine, 1) || matchCheck(grid[1][1], firstBox, 4) || matchCheck(grid[1][1], secondRow, 1))
        {
            grid[1][1] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        secondLine[1] = grid[1][1]; firstBox[4] = grid[1][1]; secondRow[1] = grid[1][1];

        iterationCount = 0;

        grid[1][2] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[1][2], secondLine, 2) || matchCheck(grid[1][2], firstBox, 5) || matchCheck(grid[1][2], thirdRow, 1))
        {
            grid[1][2] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        secondLine[2] = grid[1][2]; firstBox[5] = grid[1][2]; thirdRow[1] = grid[1][2];
        iterationCount = 0;

        grid[1][3] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[1][3], secondLine, 3) || matchCheck(grid[1][3], secondBox, 3) || matchCheck(grid[1][3], fourthRow, 1))
        {
            grid[1][3] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        secondLine[3] = grid[1][3]; secondBox[3] = grid[1][3]; fourthRow[1] = grid[1][3];
        iterationCount = 0;

        grid[1][4] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[1][4], secondLine, 4) || matchCheck(grid[1][4], secondBox, 4) || matchCheck(grid[1][4], fifthRow, 1)) {
            grid[1][4] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        secondLine[4] = grid[1][4]; secondBox[4] = grid[1][4]; fifthRow[1] = grid[1][4];
        iterationCount = 0;

        grid[1][5] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[1][5], secondLine, 5) || matchCheck(grid[1][5], secondBox, 5) || matchCheck(grid[1][5], sixthRow, 1)) {
            grid[1][5] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        secondLine[5] = grid[1][5]; secondBox[5] = grid[1][5]; sixthRow[1] = grid[1][5];
        iterationCount = 0;

        grid[1][6] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[1][6], secondLine, 6) || matchCheck(grid[1][6], thirdBox, 3) || matchCheck(grid[1][6], seventhRow, 1)) {
            grid[1][6] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        secondLine[6] = grid[1][6]; thirdBox[3] = grid[1][6]; seventhRow[1] = grid[1][6];
        iterationCount = 0;

        grid[1][7] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[1][7], secondLine, 7) || matchCheck(grid[1][7], thirdBox, 4) || matchCheck(grid[1][7], eighthRow, 1)) {
            grid[1][7] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        secondLine[7] = grid[1][7]; thirdBox[4] = grid[1][7]; eighthRow[1] = grid[1][7];
        iterationCount = 0;

        

        grid[1][8] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[1][8], secondLine, 8) || matchCheck(grid[1][8], thirdBox, 5) || matchCheck(grid[1][8], ninthRow, 1)) {
            grid[1][8] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        thirdBox[5] = grid[1][8]; ninthRow[1] = grid[1][8];

        if (eraseLine) {
            grid[1][0] = 0; grid[1][1] = 0; grid[1][2] = 0; grid[1][3] = 0; grid[1][4] = 0; grid[1][5] = 0; grid[1][6] = 0; ; grid[1][7] = 0; grid[1][8] = 0; grid[1][8] = 0;
            arrayPrinter(grid);
        }

    } while (eraseLine);

    do {
        eraseLine = false;
        thirdLine[0], thirdLine[1], thirdLine[2], thirdLine[3], thirdLine[4], thirdLine[5], thirdLine[6], thirdLine[7] = 0;
        firstBox[6], firstBox[7], secondBox[6], secondBox[7], thirdBox[6], thirdBox[7] = 0;
        firstRow[2], secondRow[2], thirdRow[2], fourthRow[2], fifthRow[2], sixthRow[2], seventhRow[2], eighthRow[2], ninthRow[2] = 0;
        char iterationCount = 0;

        grid[2][0] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[2][0], firstBox, 6) || matchCheck(grid[2][0], firstRow, 2))
        {
            grid[2][0] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }

        thirdLine[0] = grid[2][0]; firstBox[6] = grid[2][0]; firstRow[2] = grid[2][0];

        iterationCount = 0;

        grid[2][1] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[2][1], thirdLine, 1) || matchCheck(grid[2][1], firstBox, 7) || matchCheck(grid[2][1], secondRow, 2))
        {
            grid[2][1] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        thirdLine[1] = grid[2][1]; firstBox[7] = grid[2][1]; secondRow[2] = grid[2][1];

        iterationCount = 0;

        grid[2][2] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[2][2], thirdLine, 2) || matchCheck(grid[2][2], firstBox, 8) || matchCheck(grid[2][2], thirdRow, 2))
        {
            grid[2][2] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }

        thirdLine[2] = grid[2][2]; firstBox[8] = grid[2][2]; thirdRow[2] = grid[2][2];
        iterationCount = 0;

        grid[2][3] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[2][3], thirdLine, 3) || matchCheck(grid[2][3], secondBox, 6) || matchCheck(grid[2][3], fourthRow, 2))
        {
            grid[2][3] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        thirdLine[3] = grid[2][3]; secondBox[6] = grid[2][3]; fourthRow[2] = grid[2][3];
        iterationCount = 0;

        grid[2][4] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[2][4], thirdLine, 4) || matchCheck(grid[2][4], secondBox, 7) || matchCheck(grid[2][4], fifthRow, 2)) {
            grid[2][4] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        thirdLine[4] = grid[2][4]; secondBox[7] = grid[2][4]; fifthRow[2] = grid[2][4];
        iterationCount = 0;

        grid[2][5] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[2][5], thirdLine, 5) || matchCheck(grid[2][5], secondBox, 8) || matchCheck(grid[2][5], sixthRow, 2)) {
            grid[2][5] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        thirdLine[5] = grid[2][5]; sixthRow[2] = grid[2][5];
        iterationCount = 0;

        grid[2][6] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[2][6], thirdLine, 6) || matchCheck(grid[2][6], thirdBox, 6) || matchCheck(grid[2][6], seventhRow, 2)) {
            grid[2][6] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        thirdLine[6] = grid[2][6]; thirdBox[6] = grid[2][6]; seventhRow[2] = grid[2][6];
        iterationCount = 0;

        grid[2][7] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[2][7], thirdLine, 7) || matchCheck(grid[2][7], thirdBox, 7) || matchCheck(grid[2][7], eighthRow, 2)) {
            grid[2][7] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        thirdLine[7] = grid[2][7]; thirdBox[7] = grid[2][7]; eighthRow[2] = grid[2][7];
        iterationCount = 0;

        fastForward = false;

        grid[2][8] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[2][8], thirdLine, 8) || matchCheck(grid[2][8], thirdBox, 8) || matchCheck(grid[2][8], ninthRow, 2)) {
            grid[2][8] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        ninthRow[2] = grid[2][8];

        if (eraseLine) {
            grid[2][0] = 0; grid[2][1] = 0; grid[2][2] = 0; grid[2][3] = 0; grid[2][4] = 0; grid[2][5] = 0; grid[2][6] = 0; ; grid[2][7] = 0; grid[2][8] = 0; grid[2][8] = 0;
            arrayPrinter(grid);
        }

    } while (eraseLine);

    do {
        eraseLine = false;
        fourthLine[0], fourthLine[1], fourthLine[2], fourthLine[3], fourthLine[4], fourthLine[5], fourthLine[6], fourthLine[7], fourthLine[8] = 0;
        fourthBox[0], fourthBox[1], fourthBox[2], fifthBox[0], fifthBox[1], fifthBox[2], sixthBox[0], sixthBox[1], sixthBox[2] = 0;
        firstRow[3], secondRow[3], thirdRow[3], fourthRow[3], fifthRow[3], sixthRow[3], seventhRow[3], eighthRow[3], ninthRow[3] = 0;
        char iterationCount = 0;

        //fastForward = false;

        grid[3][0] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[3][0], firstRow, 3))
        {
            grid[3][0] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }

        fourthLine[0] = grid[3][0]; fourthBox[0] = grid[3][0]; firstRow[3] = grid[3][0];

        iterationCount = 0;

        grid[3][1] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[3][1], fourthLine, 1) || matchCheck(grid[3][1], fourthBox, 1) || matchCheck(grid[3][1], secondRow, 3))
        {
            grid[3][1] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        fourthLine[1] = grid[3][1]; fourthBox[1] = grid[2][1]; secondRow[3] = grid[3][1];

        iterationCount = 0;

        grid[3][2] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[3][2], fourthLine, 2) || matchCheck(grid[3][2], fourthBox, 2) || matchCheck(grid[3][2], thirdRow, 3))
        {
            grid[3][2] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }

        fourthLine[2] = grid[3][2]; fourthBox[2] = grid[3][2]; thirdRow[3] = grid[3][2];
        iterationCount = 0;

        grid[3][3] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[3][3], fourthLine, 3) || matchCheck(grid[3][3], fourthRow, 3))
        {
            grid[3][3] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        fourthLine[3] = grid[3][3]; fifthBox[0] = grid[3][3]; fourthRow[3] = grid[3][3];
        iterationCount = 0;

        grid[3][4] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[3][4], fourthLine, 4) || matchCheck(grid[3][4], fifthBox, 1) || matchCheck(grid[3][4], fifthRow, 4)) {
            grid[3][4] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        fourthLine[4] = grid[3][4]; fifthBox[1] = grid[3][4]; fifthRow[4] = grid[3][4];
        iterationCount = 0;

        grid[3][5] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[3][5], fourthLine, 5) || matchCheck(grid[3][5], fifthBox, 2) || matchCheck(grid[3][5], sixthRow, 4)) {
            grid[3][5] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        fourthLine[5] = grid[3][5]; fifthBox[2] = grid[3][5]; sixthRow[4] = grid[3][5];
        iterationCount = 0;

        grid[3][6] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[3][6], fourthLine, 6) || matchCheck(grid[3][6], seventhRow, 4)) {
            grid[3][6] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        fourthLine[6] = grid[3][6]; sixthBox[0] = grid[3][6]; seventhRow[4] = grid[3][6];
        iterationCount = 0;

        grid[3][7] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[3][7], fourthLine, 7) || matchCheck(grid[3][7], sixthBox, 1) || matchCheck(grid[3][7], eighthRow, 4)) {
            grid[3][7] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        fourthLine[7] = grid[3][7]; sixthBox[1] = grid[3][7]; eighthRow[4] = grid[3][7];
        iterationCount = 0;

        grid[3][8] = distr(gen); arrayPrinter(grid);
        while (matchCheck(grid[3][8], fourthLine, 8) || matchCheck(grid[3][8], sixthBox, 2) || matchCheck(grid[3][8], ninthRow, 4)) {
            grid[3][8] = distr(gen); arrayPrinter(grid);
            iterationCount++;
            if (iterationCount == 20) {
                eraseLine = true;
                break;
            }
        }
        sixthBox[3] = grid[3][8]; ninthRow[4] = grid[3][8];

        if (eraseLine) {
            grid[3][0] = 0; grid[3][1] = 0; grid[3][2] = 0; grid[3][3] = 0; grid[3][4] = 0; grid[3][5] = 0; grid[3][6] = 0; ; grid[3][7] = 0; grid[3][8] = 0; grid[3][8] = 0;
            arrayPrinter(grid);
        }

    } while (eraseLine);

    

    grid[3][0] = distr(gen);
    while (matchCheck(grid[3][0], thirdBox, 3) || matchCheck(grid[3][0], firstRow, 3))
    {
        grid[3][0] = distr(gen);

    }
    thirdBox[2] = grid[3][0]; fourthLine[0] = grid[3][0];

    grid[3][1] = distr(gen);
    while (matchCheck(grid[3][1], fourthLine, 3) || matchCheck(grid[3][1], thirdBox, 3) || matchCheck(grid[3][1], secondRow, 3))
    {
        grid[3][1] = distr(gen);

    }
    fourthLine[1] = grid[3][1];

    grid[3][2] = distr(gen);
    while (matchCheck(grid[3][2], fourthLine, 3) || matchCheck(grid[3][2], fourthBox, 3) || matchCheck(grid[3][2], thirdRow, 3))
    {
        grid[3][2] = distr(gen);
    }
    fourthLine[2] = grid[3][2]; fourthBox[2] = grid[3][2];

    grid[3][3] = distr(gen);
    while (matchCheck(grid[3][3], fourthLine, 3) || matchCheck(grid[3][3], fourthBox, 3) || matchCheck(grid[3][3], fourthRow, 3))
    {
        grid[3][3] = distr(gen);
    }

}

bool matchCheck(char number, char collection[], char maxIndex) {

    

    for (int i = 0; i < maxIndex; i++) {
        //std::cout << "comparing " << +number << " with " << +collection[i] << std::endl;
        if (number == collection[i]) {
            //std::cout << "true" << std::endl;
            return true;
        }
    }
    //std::cout << "false" << std::endl;
    return false;
}

void arrayPrinter2(char grid[][9]) {



}

void arrayPrinter(char grid[][9]) {

    system("cls");

    for (int i = 0; i < 9; i++) {
        for (int q = 0; q < 9; q++) {
            std::cout << "  " << +grid[i][q] << "  ";
            if (q == 2 || q == 5) {
                std::cout << '|';
            }
            if (q == 8) {
                std::cout << std::endl;
            }
            if (i == 2 && q == 8 || i == 5 && q == 8) {
                std::cout << "----------------------------------------------" << std::endl;
            }
        }
    }

    if (!fastForward) {
        std::this_thread::sleep_for(std::chrono::nanoseconds(50000000));
    }
    

}