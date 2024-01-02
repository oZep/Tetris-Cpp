#pragma once
#ifndef GRID_H
#define GRID_H

class Grid {
    public: 
        Grid();
        void Initialize();
        void Print();
        int grid[20][10];
    private:
        int numRows;
        int numCol;
        int cellSize;
};

#endif