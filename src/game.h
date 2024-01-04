#pragma once
#include "grid.h"
#include "block.h"


class Game {
public:
    Game();
    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    void Draw();
    Grid grid;
    void HandleInput();
    void MoveBlockLeft();
    void MoveBlockRight();
    void MoveBlockDown();

private:
    bool IsBlockOutside();
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
};