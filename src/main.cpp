#include <filesystem>
#include <string>

#include <cstdlib>
#include <iostream>
#include <ctime>

#include "Roads2DGenerator.h"
#include "Roads2DGeneratorUnigineSplineGraph.h"

#ifdef _WIN32
int wmain(int argc, wchar_t *argv[])
#else
int main(int argc, char *argv[])
#endif
{
    int width = 30;
    int height = 30;
    Roads2DGenerator road2gen(width, height);
    road2gen.generate(0.7);
    road2gen.printMap();

    // std::cout << "1" << std::endl;
    Roads2DGeneratorUnigineSplineGraph unigineSpl(road2gen.exportToGraph());
    unigineSpl.modifyScale(10);
    unigineSpl.modifyRandom(10.0, 10.0, 0.5);

    unigineSpl.exportToSPLFile("test.spl");
    return 0;
}