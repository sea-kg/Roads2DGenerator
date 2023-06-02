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
    int width = 41;
    int height = 41;
    Roads2DGenerator road2gen(width, height);
    road2gen.generate(0.5);
    road2gen.printMap();
    Roads2DGeneratorUnigineSplineGraph unigineSpl(road2gen.exportToGraph());
    unigineSpl.exportToSPLFile("test.spl");
    return 0;
}