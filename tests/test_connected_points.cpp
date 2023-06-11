#include "Roads2DGenerator.h"

#include <vector>
#include <iostream>

int main() {
    Roads2DGeneratorConnectedComponents components;

    // first component
    components.addConnectedPoints(Roads2DGeneratorPoint(1,1), Roads2DGeneratorPoint(2,1));
    components.addConnectedPoints(Roads2DGeneratorPoint(2,1), Roads2DGeneratorPoint(2,2));
    components.addConnectedPoints(Roads2DGeneratorPoint(2,1), Roads2DGeneratorPoint(1,1));
    components.addConnectedPoints(Roads2DGeneratorPoint(2,2), Roads2DGeneratorPoint(1,2));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,1), Roads2DGeneratorPoint(1,2));

    // second component
     components.addConnectedPoints(Roads2DGeneratorPoint(1,4), Roads2DGeneratorPoint(2,4));

    std::vector<Roads2DGeneratorConnectedComponent> vComponents = components.getComponents();
    if (vComponents.size() != 2){
        std::cerr
            << "Expected 2 "
            << ", but got " << vComponents.size()
            << std::endl;
        return 1;
    }
    if (vComponents[0].getPoints().size() != 4) {
        std::cerr
            << "Expected 2 "
            << ", but got " << vComponents.size()
            << std::endl;
        return 1;
    }

    return 0;
}