#include <filesystem>
#include <string>

#include <cstdlib>
#include <iostream>
#include <ctime>

#include "Roads2DGenerator.h"

#ifdef _WIN32
int wmain(int argc, wchar_t *argv[])
#else
int main(int argc, char *argv[])
#endif
{
    int width = 41;
    int height = 41;
    Roads2DGenerator road2gen(width, height);
    road2gen.generate(0.5);
    road2gen.print_map();
    std::vector<std::vector<bool>> result = road2gen.exportToPixelMap();
    for (int x = 1; x < width-1; x++) {
        for (int y = 1; y < height-1; y++) {
            
        }
    }
    return 0;
}