#include "grid.h"
#include <iostream>
#include "colors.h"

Grid::Grid() {  // constructor
    numRows = 20;
    numCol = 10;
    cellSize = 30;
    Initialize();
    colors = GetCellColors();
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

void Grid::Draw() {
    for (int row = 0; row < numRows; row++) {
        for (int column = 0; column < numCol; column++) {
            int cellValue = grid[row][column];
            DrawRectangle(column * cellSize + 1, row * cellSize + 1, cellSize -1, cellSize -1, colors[cellValue]);
        }
    }
}

bool Grid::IsCellOutside(int row, int col) {
    if (row >= 0 && row < numRows && col >= 0 && col < numCol) {
        return false;
    }
    return true;
}