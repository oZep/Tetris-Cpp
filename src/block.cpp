#include "block.h"
#include <raylib.h>

Block::Block() {
    cellSize = 30;
    rotationState = 0;
    colors = GetCellColors();
    rowOffset = 0;
    colOffset = 0;
}

void Block::Draw() {
    std::vector<Position> tiles = GetCellPosition();
    for (Position item: tiles) {
        DrawRectangle(item.column * cellSize + 1, item.row * cellSize + 1, cellSize -1, cellSize -1, colors[id]);
    }
}

void Block::Move(int row, int column) {
    rowOffset += row;
    colOffset += column;
}

std::vector<Position> Block::GetCellPosition() {
    std::vector<Position> tiles = cells[rotationState];
    std::vector<Position> movedTiles;
    for (Position item: tiles) {
        Position newPos = Position(item.row + rowOffset, item.column + colOffset);
        movedTiles.push_back(newPos);
    }

    return movedTiles;

}

void Block::Rotate() {
    rotationState = (rotationState + 1) % (int) cells.size();
}

void Block::UndoRotate() {
    rotationState = (rotationState - 1) % (int) cells.size();
}