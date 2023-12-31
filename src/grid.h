#pragma once
#include <vector>
#include <raylib.h>

class Grid {
    public: 
        Grid();
        void Initialize();
        void Print();
        int grid[20][10];
        void Draw();
        bool IsCellOutside(int row, int col);
    private:
        int numRows;
        int numCol;
        int cellSize;
        std::vector<Color> colors;
};
