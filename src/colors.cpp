#include "colors.h"
#include <vector>

const Color darkGrey = DARKGRAY;
const Color green = GREEN;
const Color red = RED;
const Color orange = ORANGE;
const Color yellow = YELLOW;
const Color purple = PURPLE;
const Color cyan = {21, 204, 209, 255};
const Color blue = BLUE;

std::vector<Color> GetCellColors() {
    return {darkGrey, green, red, orange, yellow, purple, cyan, blue};
}