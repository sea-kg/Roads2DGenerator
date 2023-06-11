#include "Roads2DGenerator.h"

#include <vector>
#include <iostream>

int main() {
    Roads2DGeneratorPseudoRandom rand;
    rand.setInitSeed(1686154273);
    std::vector<int> vRandomNumbers;
    vRandomNumbers.push_back(-395255789);
    vRandomNumbers.push_back(517969440);
    vRandomNumbers.push_back(-905537371);
    vRandomNumbers.push_back(-16776518);
    for (int i = 0; i < vRandomNumbers.size(); i++) {
        int nRand = rand.getNextRandom();
        if (vRandomNumbers[i] != nRand) {
            std::cerr
                << "Expected random: " << vRandomNumbers[i]
                << ", but got " << nRand
                << " on iteration: " << i
                << std::endl;
            return 1;
        }
    }
    return 0;
}