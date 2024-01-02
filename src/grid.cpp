#include "grid.h"
#include <iostream>

Grid::Grid() {  // constructor
    numRows = 20;
    numCol = 10;
    cellSize = 30;
    Initialize();
}

void Grid::Initialize() {
    for (int row = 0; row < numRows; row++) {
        for (int column = 0; column < numCol; column++) {
            grid[row][column] = 0;
        }
    }
}

void Grid::Print() {    
    for (int row = 0; row < numRows; row++) {
        for (int column = 0; column < numCol; column++) {
            std::cout << grid[row][column] << " ";
        }
        std::cout << std::endl;
    }
}