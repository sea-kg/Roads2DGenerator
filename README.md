# Roads2DGenerator

algorithm for generation map of reads in 2d

(collapse wave function???)

forked and improved from https://github.com/sea-kg/roadmapgen2d

Example of generated structs (30x30 points):

![example1.png](https://raw.githubusercontent.com/sea-kg/bna/master/contrib/images/example1.jpg)
![example2.png](https://raw.githubusercontent.com/sea-kg/bna/master/contrib/images/example2.jpg)
![example3.png](https://raw.githubusercontent.com/sea-kg/bna/master/contrib/images/example3.jpg)
![example4.png](https://raw.githubusercontent.com/sea-kg/bna/master/contrib/images/example4.jpg)


## Usage

1. Copy `src/Roads2DGenerator.*` to your project

```cpp
#include "Roads2DGenerator.h"

...

int width = 30;
int height = 30;
Roads2DGenerator road2gen(width, height);
road2gen.generate(0.7);

// use a table with true/false
std::vector<std::vector<bool>> vPixelMap = road2gen.exportToPixelMap();
for (int x = 0; x < width; x++) {
    for (int y = 0; y < height; y++) {
        if (vPixelMap[x][y]) {
            // has road
        } else {
            // no road
        }
    }
}

// or use a table with directional elements
std::vector<std::vector<std::string>> vTable = exportToTable();
for (int x = 0; x < width; x++) {
    for (int y = 0; y < height; y++) {
        std::string sRoad = vTable[x][y];
        if (sRoad == "cross") {
            // ╬
        } else if (sRoad == "horizontal") {
            // ═
        } else if (sRoad == "vertical") {
            // ║
        } else if (sRoad == "right-down") {
            // ╔
        } else if (sRoad == "left-down") {
            // ╗
        } else if (sRoad == "right-up") {
            // ╚
        } else if (sRoad == "left-up") {
            // ╝
        } else if (sRoad == "left-up-down") {
            // ╣
        } else if (sRoad == "right-up-down") {
            // ╠
        } else if (sRoad == "left-right-down") {
            // ╦
        } else if (sRoad == "left-right-up") {
            // ╩
        } else {
            // nope
        }
    }
}

```