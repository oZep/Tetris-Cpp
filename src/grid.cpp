#include "grid.h"
#include <iostream>

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

std::vector<Color> Grid::GetCellColors() {
    Color darkGrey = DARKGRAY;
    Color green = GREEN;
    Color red = RED;
    Color orange = ORANGE;
    Color yellow = YELLOW;
    Color purple = PURPLE;
    Color cyan = {21, 204, 209, 255};
    Color blue = BLUE;

    return {darkGrey, green, red, orange, yellow, purple, cyan, blue};
}

void Grid::Draw() {
    for (int row = 0; row < numRows; row++) {
        for (int column = 0; column < numCol; column++) {
            int cellValue = grid[row][column];
            DrawRectangle(column * cellSize + 1, row * cellSize + 1, cellSize -1, cellSize -1, colors[cellValue]);
        }
    }
}