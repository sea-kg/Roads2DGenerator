#include "Roads2DGenerator.h"

#include <vector>
#include <iostream>

int main() {
    Roads2DGeneratorConnectedComponents components;

    //                                 ██████        ████████
    //                                 ██  ████████████    ██
    //                                 ██  ██  ██  ██      ██
    //   ██████                        ██  ██  ██  ████████████
    //   ██  ██                  ████████████████████        ██████████
    //   ██  ██                  ██    ██                            ██
    //   ████████████            ██    ██                            ██
    //   ██  ██    ██            ██    ████████████████████████████████
    //   ██  ████████            ██    ██      ██
    //   ██      ██        ████████    ██      ██
    //   ██      ██        ██    ██    ██      ██
    //   ██      ██        ██████████████████████        ████████████████
    //   ██      ██              ██            ██        ██            ██████
    //   ██      ██              ██            ██        ████          ██  ██
    //   ██    ██████            ██████████████████        ██████████████  ████
    //   ████████  ████████████        ██        ██    ██████        ██      ██
    //   ██    ██    ██      ██        ██      ██████████  ██        ██  ██████
    //   ██    ██    ████████████████  ██      ██      ██  ██        ██  ██  ██
    //   ██    ██    ██  ██  ██    ██████████████████  ██  ██        ██████  ██████
    //   ██  ████    ██  ██  ██    ██  ██      ██  ██  ██  ██          ██        ██
    //   ██████      ██  ████████████  ██    ████  ██████████          ██    ██████
    //               ██  ██      ██    ██    ██    ██      ██          ██    ██
    //               ████████████████  ██    ██    ██      ██          ██  ████
    //               ██            ████████  ████████      ██          ██  ██
    //               ██            ██    ██  ██    ██      ██          ████████
    //               ████████████████████████████  ██      ██████████████    ██
    //               ██          ██            ██  ██████  ██        ██      ██
    //   ██████████████          ██            ██████  ██  ██        ██      ██████████
    //   ██          ██          ██                ██  ██████        ████    ██      ██
    //   ██          ██          ██                ██  ██              ████████████████
    //   ██          ██          ████              ██  ██              ██
    //   ██████████████            ██              ██████    ████████████
    //                       ████████                  ██    ██      ██          ██████
    //                       ██            ██████      ██    ████    ████        ██  ██
    //                       ██████████    ██  ██      ██      ██      ██        ██  ██
    //                               ██    ██  ██      ██      ██      ██        ██████
    //                               ████  ██████████████████████████████
    //                                 ██  ██
    //                                 ██████

    components.addConnectedPoints(Roads2DGeneratorPoint(1,4), Roads2DGeneratorPoint(2,4));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,4), Roads2DGeneratorPoint(1,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,5), Roads2DGeneratorPoint(1,6));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,6), Roads2DGeneratorPoint(1,7));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,7), Roads2DGeneratorPoint(2,7));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,7), Roads2DGeneratorPoint(1,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,8), Roads2DGeneratorPoint(1,9));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,9), Roads2DGeneratorPoint(1,10));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,10), Roads2DGeneratorPoint(1,11));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,11), Roads2DGeneratorPoint(1,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,12), Roads2DGeneratorPoint(1,13));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,13), Roads2DGeneratorPoint(1,14));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,14), Roads2DGeneratorPoint(1,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,15), Roads2DGeneratorPoint(1,16));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,16), Roads2DGeneratorPoint(2,16));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,16), Roads2DGeneratorPoint(1,17));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,17), Roads2DGeneratorPoint(1,18));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,18), Roads2DGeneratorPoint(1,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,19), Roads2DGeneratorPoint(1,20));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,20), Roads2DGeneratorPoint(1,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,21), Roads2DGeneratorPoint(2,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,28), Roads2DGeneratorPoint(2,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,28), Roads2DGeneratorPoint(1,29));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,29), Roads2DGeneratorPoint(1,30));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,30), Roads2DGeneratorPoint(1,31));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,31), Roads2DGeneratorPoint(1,32));
    components.addConnectedPoints(Roads2DGeneratorPoint(1,32), Roads2DGeneratorPoint(2,32));
    components.addConnectedPoints(Roads2DGeneratorPoint(2,4), Roads2DGeneratorPoint(3,4));
    components.addConnectedPoints(Roads2DGeneratorPoint(2,7), Roads2DGeneratorPoint(3,7));
    components.addConnectedPoints(Roads2DGeneratorPoint(2,16), Roads2DGeneratorPoint(3,16));
    components.addConnectedPoints(Roads2DGeneratorPoint(2,21), Roads2DGeneratorPoint(3,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(2,28), Roads2DGeneratorPoint(3,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(2,32), Roads2DGeneratorPoint(3,32));
    components.addConnectedPoints(Roads2DGeneratorPoint(3,4), Roads2DGeneratorPoint(3,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(3,5), Roads2DGeneratorPoint(3,6));
    components.addConnectedPoints(Roads2DGeneratorPoint(3,6), Roads2DGeneratorPoint(3,7));
    components.addConnectedPoints(Roads2DGeneratorPoint(3,7), Roads2DGeneratorPoint(4,7));
    components.addConnectedPoints(Roads2DGeneratorPoint(3,7), Roads2DGeneratorPoint(3,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(3,8), Roads2DGeneratorPoint(3,9));
    components.addConnectedPoints(Roads2DGeneratorPoint(3,9), Roads2DGeneratorPoint(4,9));
    components.addConnectedPoints(Roads2DGeneratorPoint(3,16), Roads2DGeneratorPoint(4,16));
    components.addConnectedPoints(Roads2DGeneratorPoint(3,20), Roads2DGeneratorPoint(4,20));
    components.addConnectedPoints(Roads2DGeneratorPoint(3,20), Roads2DGeneratorPoint(3,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(3,28), Roads2DGeneratorPoint(4,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(3,32), Roads2DGeneratorPoint(4,32));
    components.addConnectedPoints(Roads2DGeneratorPoint(4,7), Roads2DGeneratorPoint(5,7));
    components.addConnectedPoints(Roads2DGeneratorPoint(4,9), Roads2DGeneratorPoint(5,9));
    components.addConnectedPoints(Roads2DGeneratorPoint(4,15), Roads2DGeneratorPoint(5,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(4,15), Roads2DGeneratorPoint(4,16));
    components.addConnectedPoints(Roads2DGeneratorPoint(4,16), Roads2DGeneratorPoint(4,17));
    components.addConnectedPoints(Roads2DGeneratorPoint(4,17), Roads2DGeneratorPoint(4,18));
    components.addConnectedPoints(Roads2DGeneratorPoint(4,18), Roads2DGeneratorPoint(4,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(4,19), Roads2DGeneratorPoint(4,20));
    components.addConnectedPoints(Roads2DGeneratorPoint(4,28), Roads2DGeneratorPoint(5,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(4,32), Roads2DGeneratorPoint(5,32));
    components.addConnectedPoints(Roads2DGeneratorPoint(5,7), Roads2DGeneratorPoint(6,7));
    components.addConnectedPoints(Roads2DGeneratorPoint(5,9), Roads2DGeneratorPoint(6,9));
    components.addConnectedPoints(Roads2DGeneratorPoint(5,9), Roads2DGeneratorPoint(5,10));
    components.addConnectedPoints(Roads2DGeneratorPoint(5,10), Roads2DGeneratorPoint(5,11));
    components.addConnectedPoints(Roads2DGeneratorPoint(5,11), Roads2DGeneratorPoint(5,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(5,12), Roads2DGeneratorPoint(5,13));
    components.addConnectedPoints(Roads2DGeneratorPoint(5,13), Roads2DGeneratorPoint(5,14));
    components.addConnectedPoints(Roads2DGeneratorPoint(5,14), Roads2DGeneratorPoint(5,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(5,15), Roads2DGeneratorPoint(6,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(5,28), Roads2DGeneratorPoint(6,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(5,32), Roads2DGeneratorPoint(6,32));
    components.addConnectedPoints(Roads2DGeneratorPoint(6,7), Roads2DGeneratorPoint(6,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(6,8), Roads2DGeneratorPoint(6,9));
    components.addConnectedPoints(Roads2DGeneratorPoint(6,15), Roads2DGeneratorPoint(6,16));
    components.addConnectedPoints(Roads2DGeneratorPoint(6,16), Roads2DGeneratorPoint(7,16));
    components.addConnectedPoints(Roads2DGeneratorPoint(6,28), Roads2DGeneratorPoint(7,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(6,32), Roads2DGeneratorPoint(7,32));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,16), Roads2DGeneratorPoint(8,16));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,16), Roads2DGeneratorPoint(7,17));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,17), Roads2DGeneratorPoint(7,18));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,18), Roads2DGeneratorPoint(8,18));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,18), Roads2DGeneratorPoint(7,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,19), Roads2DGeneratorPoint(7,20));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,20), Roads2DGeneratorPoint(7,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,21), Roads2DGeneratorPoint(7,22));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,22), Roads2DGeneratorPoint(7,23));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,23), Roads2DGeneratorPoint(8,23));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,23), Roads2DGeneratorPoint(7,24));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,24), Roads2DGeneratorPoint(7,25));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,25), Roads2DGeneratorPoint(7,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,26), Roads2DGeneratorPoint(8,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,26), Roads2DGeneratorPoint(7,27));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,27), Roads2DGeneratorPoint(7,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,28), Roads2DGeneratorPoint(7,29));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,29), Roads2DGeneratorPoint(7,30));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,30), Roads2DGeneratorPoint(7,31));
    components.addConnectedPoints(Roads2DGeneratorPoint(7,31), Roads2DGeneratorPoint(7,32));
    components.addConnectedPoints(Roads2DGeneratorPoint(8,16), Roads2DGeneratorPoint(9,16));
    components.addConnectedPoints(Roads2DGeneratorPoint(8,18), Roads2DGeneratorPoint(9,18));
    components.addConnectedPoints(Roads2DGeneratorPoint(8,23), Roads2DGeneratorPoint(9,23));
    components.addConnectedPoints(Roads2DGeneratorPoint(8,26), Roads2DGeneratorPoint(9,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(9,16), Roads2DGeneratorPoint(10,16));
    components.addConnectedPoints(Roads2DGeneratorPoint(9,18), Roads2DGeneratorPoint(10,18));
    components.addConnectedPoints(Roads2DGeneratorPoint(9,18), Roads2DGeneratorPoint(9,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(9,19), Roads2DGeneratorPoint(9,20));
    components.addConnectedPoints(Roads2DGeneratorPoint(9,20), Roads2DGeneratorPoint(9,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(9,21), Roads2DGeneratorPoint(10,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(9,21), Roads2DGeneratorPoint(9,22));
    components.addConnectedPoints(Roads2DGeneratorPoint(9,22), Roads2DGeneratorPoint(9,23));
    components.addConnectedPoints(Roads2DGeneratorPoint(9,23), Roads2DGeneratorPoint(10,23));
    components.addConnectedPoints(Roads2DGeneratorPoint(9,26), Roads2DGeneratorPoint(10,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(10,10), Roads2DGeneratorPoint(11,10));
    components.addConnectedPoints(Roads2DGeneratorPoint(10,10), Roads2DGeneratorPoint(10,11));
    components.addConnectedPoints(Roads2DGeneratorPoint(10,11), Roads2DGeneratorPoint(10,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(10,12), Roads2DGeneratorPoint(11,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(10,16), Roads2DGeneratorPoint(11,16));
    components.addConnectedPoints(Roads2DGeneratorPoint(10,18), Roads2DGeneratorPoint(11,18));
    components.addConnectedPoints(Roads2DGeneratorPoint(10,21), Roads2DGeneratorPoint(11,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(10,23), Roads2DGeneratorPoint(11,23));
    components.addConnectedPoints(Roads2DGeneratorPoint(10,26), Roads2DGeneratorPoint(11,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(11,10), Roads2DGeneratorPoint(12,10));
    components.addConnectedPoints(Roads2DGeneratorPoint(11,12), Roads2DGeneratorPoint(12,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(11,16), Roads2DGeneratorPoint(11,17));
    components.addConnectedPoints(Roads2DGeneratorPoint(11,17), Roads2DGeneratorPoint(11,18));
    components.addConnectedPoints(Roads2DGeneratorPoint(11,18), Roads2DGeneratorPoint(12,18));
    components.addConnectedPoints(Roads2DGeneratorPoint(11,18), Roads2DGeneratorPoint(11,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(11,19), Roads2DGeneratorPoint(11,20));
    components.addConnectedPoints(Roads2DGeneratorPoint(11,20), Roads2DGeneratorPoint(11,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(11,21), Roads2DGeneratorPoint(12,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(11,23), Roads2DGeneratorPoint(12,23));
    components.addConnectedPoints(Roads2DGeneratorPoint(11,26), Roads2DGeneratorPoint(12,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(11,33), Roads2DGeneratorPoint(12,33));
    components.addConnectedPoints(Roads2DGeneratorPoint(11,33), Roads2DGeneratorPoint(11,34));
    components.addConnectedPoints(Roads2DGeneratorPoint(11,34), Roads2DGeneratorPoint(11,35));
    components.addConnectedPoints(Roads2DGeneratorPoint(11,35), Roads2DGeneratorPoint(12,35));
    components.addConnectedPoints(Roads2DGeneratorPoint(12,10), Roads2DGeneratorPoint(13,10));
    components.addConnectedPoints(Roads2DGeneratorPoint(12,12), Roads2DGeneratorPoint(13,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(12,18), Roads2DGeneratorPoint(13,18));
    components.addConnectedPoints(Roads2DGeneratorPoint(12,21), Roads2DGeneratorPoint(13,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(12,23), Roads2DGeneratorPoint(13,23));
    components.addConnectedPoints(Roads2DGeneratorPoint(12,26), Roads2DGeneratorPoint(13,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(12,33), Roads2DGeneratorPoint(13,33));
    components.addConnectedPoints(Roads2DGeneratorPoint(12,35), Roads2DGeneratorPoint(13,35));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,5), Roads2DGeneratorPoint(14,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,5), Roads2DGeneratorPoint(13,6));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,6), Roads2DGeneratorPoint(13,7));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,7), Roads2DGeneratorPoint(13,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,8), Roads2DGeneratorPoint(13,9));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,9), Roads2DGeneratorPoint(13,10));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,10), Roads2DGeneratorPoint(13,11));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,11), Roads2DGeneratorPoint(13,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,12), Roads2DGeneratorPoint(14,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,12), Roads2DGeneratorPoint(13,13));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,13), Roads2DGeneratorPoint(13,14));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,14), Roads2DGeneratorPoint(13,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,15), Roads2DGeneratorPoint(14,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,18), Roads2DGeneratorPoint(14,18));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,21), Roads2DGeneratorPoint(14,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,21), Roads2DGeneratorPoint(13,22));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,22), Roads2DGeneratorPoint(13,23));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,23), Roads2DGeneratorPoint(14,23));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,26), Roads2DGeneratorPoint(14,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,26), Roads2DGeneratorPoint(13,27));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,27), Roads2DGeneratorPoint(13,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,28), Roads2DGeneratorPoint(13,29));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,29), Roads2DGeneratorPoint(13,30));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,30), Roads2DGeneratorPoint(13,31));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,31), Roads2DGeneratorPoint(14,31));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,33), Roads2DGeneratorPoint(14,33));
    components.addConnectedPoints(Roads2DGeneratorPoint(13,35), Roads2DGeneratorPoint(14,35));
    components.addConnectedPoints(Roads2DGeneratorPoint(14,5), Roads2DGeneratorPoint(15,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(14,12), Roads2DGeneratorPoint(15,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(14,15), Roads2DGeneratorPoint(15,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(14,18), Roads2DGeneratorPoint(14,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(14,19), Roads2DGeneratorPoint(15,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(14,19), Roads2DGeneratorPoint(14,20));
    components.addConnectedPoints(Roads2DGeneratorPoint(14,20), Roads2DGeneratorPoint(14,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(14,23), Roads2DGeneratorPoint(14,24));
    components.addConnectedPoints(Roads2DGeneratorPoint(14,24), Roads2DGeneratorPoint(15,24));
    components.addConnectedPoints(Roads2DGeneratorPoint(14,24), Roads2DGeneratorPoint(14,25));
    components.addConnectedPoints(Roads2DGeneratorPoint(14,25), Roads2DGeneratorPoint(14,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(14,26), Roads2DGeneratorPoint(15,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(14,31), Roads2DGeneratorPoint(14,32));
    components.addConnectedPoints(Roads2DGeneratorPoint(14,32), Roads2DGeneratorPoint(14,33));
    components.addConnectedPoints(Roads2DGeneratorPoint(14,35), Roads2DGeneratorPoint(15,35));
    components.addConnectedPoints(Roads2DGeneratorPoint(15,5), Roads2DGeneratorPoint(16,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(15,12), Roads2DGeneratorPoint(16,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(15,15), Roads2DGeneratorPoint(16,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(15,19), Roads2DGeneratorPoint(16,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(15,24), Roads2DGeneratorPoint(16,24));
    components.addConnectedPoints(Roads2DGeneratorPoint(15,26), Roads2DGeneratorPoint(16,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(15,35), Roads2DGeneratorPoint(15,36));
    components.addConnectedPoints(Roads2DGeneratorPoint(15,36), Roads2DGeneratorPoint(15,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(15,37), Roads2DGeneratorPoint(16,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,1), Roads2DGeneratorPoint(17,1));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,1), Roads2DGeneratorPoint(16,2));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,2), Roads2DGeneratorPoint(16,3));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,3), Roads2DGeneratorPoint(16,4));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,4), Roads2DGeneratorPoint(16,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,5), Roads2DGeneratorPoint(17,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,5), Roads2DGeneratorPoint(16,6));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,6), Roads2DGeneratorPoint(16,7));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,7), Roads2DGeneratorPoint(16,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,8), Roads2DGeneratorPoint(17,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,8), Roads2DGeneratorPoint(16,9));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,9), Roads2DGeneratorPoint(16,10));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,10), Roads2DGeneratorPoint(16,11));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,11), Roads2DGeneratorPoint(16,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,12), Roads2DGeneratorPoint(17,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,15), Roads2DGeneratorPoint(17,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,15), Roads2DGeneratorPoint(16,16));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,16), Roads2DGeneratorPoint(16,17));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,17), Roads2DGeneratorPoint(16,18));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,18), Roads2DGeneratorPoint(16,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,19), Roads2DGeneratorPoint(17,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,19), Roads2DGeneratorPoint(16,20));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,20), Roads2DGeneratorPoint(16,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,21), Roads2DGeneratorPoint(16,22));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,22), Roads2DGeneratorPoint(16,23));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,23), Roads2DGeneratorPoint(16,24));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,24), Roads2DGeneratorPoint(17,24));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,26), Roads2DGeneratorPoint(17,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,37), Roads2DGeneratorPoint(16,38));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,38), Roads2DGeneratorPoint(16,39));
    components.addConnectedPoints(Roads2DGeneratorPoint(16,39), Roads2DGeneratorPoint(17,39));
    components.addConnectedPoints(Roads2DGeneratorPoint(17,1), Roads2DGeneratorPoint(18,1));
    components.addConnectedPoints(Roads2DGeneratorPoint(17,5), Roads2DGeneratorPoint(18,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(17,8), Roads2DGeneratorPoint(18,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(17,12), Roads2DGeneratorPoint(18,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(17,15), Roads2DGeneratorPoint(18,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(17,19), Roads2DGeneratorPoint(18,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(17,24), Roads2DGeneratorPoint(17,25));
    components.addConnectedPoints(Roads2DGeneratorPoint(17,25), Roads2DGeneratorPoint(17,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(17,26), Roads2DGeneratorPoint(18,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(17,39), Roads2DGeneratorPoint(18,39));
    components.addConnectedPoints(Roads2DGeneratorPoint(18,1), Roads2DGeneratorPoint(18,2));
    components.addConnectedPoints(Roads2DGeneratorPoint(18,2), Roads2DGeneratorPoint(19,2));
    components.addConnectedPoints(Roads2DGeneratorPoint(18,2), Roads2DGeneratorPoint(18,3));
    components.addConnectedPoints(Roads2DGeneratorPoint(18,3), Roads2DGeneratorPoint(18,4));
    components.addConnectedPoints(Roads2DGeneratorPoint(18,4), Roads2DGeneratorPoint(18,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(18,5), Roads2DGeneratorPoint(19,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(18,8), Roads2DGeneratorPoint(19,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(18,12), Roads2DGeneratorPoint(19,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(18,15), Roads2DGeneratorPoint(19,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(18,19), Roads2DGeneratorPoint(19,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(18,26), Roads2DGeneratorPoint(19,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(18,34), Roads2DGeneratorPoint(19,34));
    components.addConnectedPoints(Roads2DGeneratorPoint(18,34), Roads2DGeneratorPoint(18,35));
    components.addConnectedPoints(Roads2DGeneratorPoint(18,35), Roads2DGeneratorPoint(18,36));
    components.addConnectedPoints(Roads2DGeneratorPoint(18,36), Roads2DGeneratorPoint(18,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(18,37), Roads2DGeneratorPoint(19,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(18,37), Roads2DGeneratorPoint(18,38));
    components.addConnectedPoints(Roads2DGeneratorPoint(18,38), Roads2DGeneratorPoint(18,39));
    components.addConnectedPoints(Roads2DGeneratorPoint(19,2), Roads2DGeneratorPoint(20,2));
    components.addConnectedPoints(Roads2DGeneratorPoint(19,5), Roads2DGeneratorPoint(20,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(19,8), Roads2DGeneratorPoint(20,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(19,12), Roads2DGeneratorPoint(20,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(19,15), Roads2DGeneratorPoint(20,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(19,19), Roads2DGeneratorPoint(20,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(19,21), Roads2DGeneratorPoint(20,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(19,21), Roads2DGeneratorPoint(19,22));
    components.addConnectedPoints(Roads2DGeneratorPoint(19,22), Roads2DGeneratorPoint(19,23));
    components.addConnectedPoints(Roads2DGeneratorPoint(19,23), Roads2DGeneratorPoint(19,24));
    components.addConnectedPoints(Roads2DGeneratorPoint(19,24), Roads2DGeneratorPoint(20,24));
    components.addConnectedPoints(Roads2DGeneratorPoint(19,24), Roads2DGeneratorPoint(19,25));
    components.addConnectedPoints(Roads2DGeneratorPoint(19,25), Roads2DGeneratorPoint(19,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(19,26), Roads2DGeneratorPoint(20,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(19,34), Roads2DGeneratorPoint(20,34));
    components.addConnectedPoints(Roads2DGeneratorPoint(19,37), Roads2DGeneratorPoint(20,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,2), Roads2DGeneratorPoint(21,2));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,2), Roads2DGeneratorPoint(20,3));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,3), Roads2DGeneratorPoint(20,4));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,4), Roads2DGeneratorPoint(20,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,5), Roads2DGeneratorPoint(21,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,8), Roads2DGeneratorPoint(21,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,8), Roads2DGeneratorPoint(20,9));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,9), Roads2DGeneratorPoint(20,10));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,10), Roads2DGeneratorPoint(20,11));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,11), Roads2DGeneratorPoint(20,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,12), Roads2DGeneratorPoint(20,13));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,13), Roads2DGeneratorPoint(20,14));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,14), Roads2DGeneratorPoint(20,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,15), Roads2DGeneratorPoint(21,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,17), Roads2DGeneratorPoint(21,17));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,17), Roads2DGeneratorPoint(20,18));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,18), Roads2DGeneratorPoint(20,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,19), Roads2DGeneratorPoint(21,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,19), Roads2DGeneratorPoint(20,20));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,20), Roads2DGeneratorPoint(20,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,24), Roads2DGeneratorPoint(21,24));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,26), Roads2DGeneratorPoint(20,27));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,27), Roads2DGeneratorPoint(20,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,28), Roads2DGeneratorPoint(21,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,34), Roads2DGeneratorPoint(20,35));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,35), Roads2DGeneratorPoint(20,36));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,36), Roads2DGeneratorPoint(20,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(20,37), Roads2DGeneratorPoint(21,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(21,2), Roads2DGeneratorPoint(22,2));
    components.addConnectedPoints(Roads2DGeneratorPoint(21,5), Roads2DGeneratorPoint(22,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(21,8), Roads2DGeneratorPoint(22,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(21,15), Roads2DGeneratorPoint(21,16));
    components.addConnectedPoints(Roads2DGeneratorPoint(21,16), Roads2DGeneratorPoint(21,17));
    components.addConnectedPoints(Roads2DGeneratorPoint(21,17), Roads2DGeneratorPoint(22,17));
    components.addConnectedPoints(Roads2DGeneratorPoint(21,19), Roads2DGeneratorPoint(22,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(21,24), Roads2DGeneratorPoint(22,24));
    components.addConnectedPoints(Roads2DGeneratorPoint(21,28), Roads2DGeneratorPoint(22,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(21,37), Roads2DGeneratorPoint(22,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,2), Roads2DGeneratorPoint(23,2));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,2), Roads2DGeneratorPoint(22,3));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,3), Roads2DGeneratorPoint(22,4));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,4), Roads2DGeneratorPoint(23,4));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,4), Roads2DGeneratorPoint(22,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,8), Roads2DGeneratorPoint(23,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,17), Roads2DGeneratorPoint(23,17));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,19), Roads2DGeneratorPoint(22,20));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,20), Roads2DGeneratorPoint(22,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,21), Roads2DGeneratorPoint(23,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,21), Roads2DGeneratorPoint(22,22));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,22), Roads2DGeneratorPoint(22,23));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,23), Roads2DGeneratorPoint(22,24));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,24), Roads2DGeneratorPoint(22,25));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,25), Roads2DGeneratorPoint(22,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,26), Roads2DGeneratorPoint(22,27));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,27), Roads2DGeneratorPoint(23,27));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,27), Roads2DGeneratorPoint(22,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,28), Roads2DGeneratorPoint(22,29));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,29), Roads2DGeneratorPoint(22,30));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,30), Roads2DGeneratorPoint(22,31));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,31), Roads2DGeneratorPoint(22,32));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,32), Roads2DGeneratorPoint(23,32));
    components.addConnectedPoints(Roads2DGeneratorPoint(22,37), Roads2DGeneratorPoint(23,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(23,1), Roads2DGeneratorPoint(24,1));
    components.addConnectedPoints(Roads2DGeneratorPoint(23,1), Roads2DGeneratorPoint(23,2));
    components.addConnectedPoints(Roads2DGeneratorPoint(23,4), Roads2DGeneratorPoint(24,4));
    components.addConnectedPoints(Roads2DGeneratorPoint(23,8), Roads2DGeneratorPoint(24,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(23,17), Roads2DGeneratorPoint(24,17));
    components.addConnectedPoints(Roads2DGeneratorPoint(23,21), Roads2DGeneratorPoint(24,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(23,27), Roads2DGeneratorPoint(24,27));
    components.addConnectedPoints(Roads2DGeneratorPoint(23,32), Roads2DGeneratorPoint(24,32));
    components.addConnectedPoints(Roads2DGeneratorPoint(23,37), Roads2DGeneratorPoint(24,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,1), Roads2DGeneratorPoint(25,1));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,4), Roads2DGeneratorPoint(25,4));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,8), Roads2DGeneratorPoint(25,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,16), Roads2DGeneratorPoint(25,16));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,16), Roads2DGeneratorPoint(24,17));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,17), Roads2DGeneratorPoint(24,18));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,18), Roads2DGeneratorPoint(24,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,19), Roads2DGeneratorPoint(24,20));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,20), Roads2DGeneratorPoint(24,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,21), Roads2DGeneratorPoint(25,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,27), Roads2DGeneratorPoint(24,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,28), Roads2DGeneratorPoint(24,29));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,29), Roads2DGeneratorPoint(25,29));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,29), Roads2DGeneratorPoint(24,30));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,30), Roads2DGeneratorPoint(24,31));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,31), Roads2DGeneratorPoint(24,32));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,32), Roads2DGeneratorPoint(24,33));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,33), Roads2DGeneratorPoint(24,34));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,34), Roads2DGeneratorPoint(24,35));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,35), Roads2DGeneratorPoint(24,36));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,36), Roads2DGeneratorPoint(24,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(24,37), Roads2DGeneratorPoint(25,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(25,1), Roads2DGeneratorPoint(26,1));
    components.addConnectedPoints(Roads2DGeneratorPoint(25,4), Roads2DGeneratorPoint(26,4));
    components.addConnectedPoints(Roads2DGeneratorPoint(25,8), Roads2DGeneratorPoint(26,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(25,12), Roads2DGeneratorPoint(26,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(25,12), Roads2DGeneratorPoint(25,13));
    components.addConnectedPoints(Roads2DGeneratorPoint(25,13), Roads2DGeneratorPoint(25,14));
    components.addConnectedPoints(Roads2DGeneratorPoint(25,14), Roads2DGeneratorPoint(26,14));
    components.addConnectedPoints(Roads2DGeneratorPoint(25,16), Roads2DGeneratorPoint(26,16));
    components.addConnectedPoints(Roads2DGeneratorPoint(25,21), Roads2DGeneratorPoint(26,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(25,29), Roads2DGeneratorPoint(26,29));
    components.addConnectedPoints(Roads2DGeneratorPoint(25,37), Roads2DGeneratorPoint(26,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,1), Roads2DGeneratorPoint(26,2));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,2), Roads2DGeneratorPoint(26,3));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,3), Roads2DGeneratorPoint(26,4));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,4), Roads2DGeneratorPoint(27,4));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,8), Roads2DGeneratorPoint(27,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,12), Roads2DGeneratorPoint(27,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,14), Roads2DGeneratorPoint(26,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,15), Roads2DGeneratorPoint(27,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,15), Roads2DGeneratorPoint(26,16));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,16), Roads2DGeneratorPoint(26,17));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,17), Roads2DGeneratorPoint(26,18));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,18), Roads2DGeneratorPoint(26,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,19), Roads2DGeneratorPoint(26,20));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,20), Roads2DGeneratorPoint(26,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,21), Roads2DGeneratorPoint(26,22));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,22), Roads2DGeneratorPoint(26,23));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,23), Roads2DGeneratorPoint(26,24));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,24), Roads2DGeneratorPoint(26,25));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,25), Roads2DGeneratorPoint(26,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,26), Roads2DGeneratorPoint(27,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,26), Roads2DGeneratorPoint(26,27));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,27), Roads2DGeneratorPoint(26,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,28), Roads2DGeneratorPoint(26,29));
    components.addConnectedPoints(Roads2DGeneratorPoint(26,37), Roads2DGeneratorPoint(27,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(27,4), Roads2DGeneratorPoint(27,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(27,5), Roads2DGeneratorPoint(28,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(27,8), Roads2DGeneratorPoint(28,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(27,12), Roads2DGeneratorPoint(28,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(27,15), Roads2DGeneratorPoint(28,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(27,26), Roads2DGeneratorPoint(28,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(27,32), Roads2DGeneratorPoint(28,32));
    components.addConnectedPoints(Roads2DGeneratorPoint(27,32), Roads2DGeneratorPoint(27,33));
    components.addConnectedPoints(Roads2DGeneratorPoint(27,33), Roads2DGeneratorPoint(27,34));
    components.addConnectedPoints(Roads2DGeneratorPoint(27,34), Roads2DGeneratorPoint(28,34));
    components.addConnectedPoints(Roads2DGeneratorPoint(27,37), Roads2DGeneratorPoint(28,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(28,5), Roads2DGeneratorPoint(29,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(28,8), Roads2DGeneratorPoint(29,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(28,12), Roads2DGeneratorPoint(29,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(28,15), Roads2DGeneratorPoint(29,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(28,26), Roads2DGeneratorPoint(29,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(28,32), Roads2DGeneratorPoint(29,32));
    components.addConnectedPoints(Roads2DGeneratorPoint(28,34), Roads2DGeneratorPoint(28,35));
    components.addConnectedPoints(Roads2DGeneratorPoint(28,35), Roads2DGeneratorPoint(28,36));
    components.addConnectedPoints(Roads2DGeneratorPoint(28,36), Roads2DGeneratorPoint(28,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(28,37), Roads2DGeneratorPoint(29,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(29,5), Roads2DGeneratorPoint(30,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(29,8), Roads2DGeneratorPoint(30,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(29,12), Roads2DGeneratorPoint(30,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(29,15), Roads2DGeneratorPoint(30,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(29,26), Roads2DGeneratorPoint(30,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(29,32), Roads2DGeneratorPoint(30,32));
    components.addConnectedPoints(Roads2DGeneratorPoint(29,37), Roads2DGeneratorPoint(30,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(30,5), Roads2DGeneratorPoint(31,5));
    components.addConnectedPoints(Roads2DGeneratorPoint(30,8), Roads2DGeneratorPoint(31,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(30,12), Roads2DGeneratorPoint(31,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(30,15), Roads2DGeneratorPoint(31,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(30,26), Roads2DGeneratorPoint(31,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(30,32), Roads2DGeneratorPoint(31,32));
    components.addConnectedPoints(Roads2DGeneratorPoint(30,37), Roads2DGeneratorPoint(31,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,5), Roads2DGeneratorPoint(31,6));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,6), Roads2DGeneratorPoint(31,7));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,7), Roads2DGeneratorPoint(31,8));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,12), Roads2DGeneratorPoint(32,12));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,15), Roads2DGeneratorPoint(32,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,15), Roads2DGeneratorPoint(31,16));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,16), Roads2DGeneratorPoint(31,17));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,17), Roads2DGeneratorPoint(31,18));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,18), Roads2DGeneratorPoint(31,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,19), Roads2DGeneratorPoint(32,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,26), Roads2DGeneratorPoint(32,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,26), Roads2DGeneratorPoint(31,27));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,27), Roads2DGeneratorPoint(31,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,28), Roads2DGeneratorPoint(31,29));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,29), Roads2DGeneratorPoint(32,29));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,32), Roads2DGeneratorPoint(32,32));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,32), Roads2DGeneratorPoint(31,33));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,33), Roads2DGeneratorPoint(31,34));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,34), Roads2DGeneratorPoint(32,34));
    components.addConnectedPoints(Roads2DGeneratorPoint(31,37), Roads2DGeneratorPoint(32,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,12), Roads2DGeneratorPoint(32,13));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,13), Roads2DGeneratorPoint(33,13));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,13), Roads2DGeneratorPoint(32,14));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,14), Roads2DGeneratorPoint(32,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,19), Roads2DGeneratorPoint(33,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,19), Roads2DGeneratorPoint(32,20));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,20), Roads2DGeneratorPoint(32,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,21), Roads2DGeneratorPoint(32,22));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,22), Roads2DGeneratorPoint(32,23));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,23), Roads2DGeneratorPoint(32,24));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,24), Roads2DGeneratorPoint(32,25));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,25), Roads2DGeneratorPoint(33,25));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,25), Roads2DGeneratorPoint(32,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,29), Roads2DGeneratorPoint(32,30));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,30), Roads2DGeneratorPoint(33,30));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,30), Roads2DGeneratorPoint(32,31));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,31), Roads2DGeneratorPoint(32,32));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,34), Roads2DGeneratorPoint(32,35));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,35), Roads2DGeneratorPoint(32,36));
    components.addConnectedPoints(Roads2DGeneratorPoint(32,36), Roads2DGeneratorPoint(32,37));
    components.addConnectedPoints(Roads2DGeneratorPoint(33,13), Roads2DGeneratorPoint(34,13));
    components.addConnectedPoints(Roads2DGeneratorPoint(33,17), Roads2DGeneratorPoint(34,17));
    components.addConnectedPoints(Roads2DGeneratorPoint(33,17), Roads2DGeneratorPoint(33,18));
    components.addConnectedPoints(Roads2DGeneratorPoint(33,18), Roads2DGeneratorPoint(33,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(33,25), Roads2DGeneratorPoint(34,25));
    components.addConnectedPoints(Roads2DGeneratorPoint(33,30), Roads2DGeneratorPoint(34,30));
    components.addConnectedPoints(Roads2DGeneratorPoint(34,13), Roads2DGeneratorPoint(34,14));
    components.addConnectedPoints(Roads2DGeneratorPoint(34,14), Roads2DGeneratorPoint(34,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(34,15), Roads2DGeneratorPoint(35,15));
    components.addConnectedPoints(Roads2DGeneratorPoint(34,17), Roads2DGeneratorPoint(35,17));
    components.addConnectedPoints(Roads2DGeneratorPoint(34,23), Roads2DGeneratorPoint(35,23));
    components.addConnectedPoints(Roads2DGeneratorPoint(34,23), Roads2DGeneratorPoint(34,24));
    components.addConnectedPoints(Roads2DGeneratorPoint(34,24), Roads2DGeneratorPoint(34,25));
    components.addConnectedPoints(Roads2DGeneratorPoint(34,25), Roads2DGeneratorPoint(35,25));
    components.addConnectedPoints(Roads2DGeneratorPoint(34,30), Roads2DGeneratorPoint(35,30));
    components.addConnectedPoints(Roads2DGeneratorPoint(35,15), Roads2DGeneratorPoint(35,16));
    components.addConnectedPoints(Roads2DGeneratorPoint(35,16), Roads2DGeneratorPoint(35,17));
    components.addConnectedPoints(Roads2DGeneratorPoint(35,17), Roads2DGeneratorPoint(35,18));
    components.addConnectedPoints(Roads2DGeneratorPoint(35,18), Roads2DGeneratorPoint(35,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(35,19), Roads2DGeneratorPoint(36,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(35,21), Roads2DGeneratorPoint(36,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(35,21), Roads2DGeneratorPoint(35,22));
    components.addConnectedPoints(Roads2DGeneratorPoint(35,22), Roads2DGeneratorPoint(35,23));
    components.addConnectedPoints(Roads2DGeneratorPoint(35,25), Roads2DGeneratorPoint(35,26));
    components.addConnectedPoints(Roads2DGeneratorPoint(35,26), Roads2DGeneratorPoint(35,27));
    components.addConnectedPoints(Roads2DGeneratorPoint(35,27), Roads2DGeneratorPoint(35,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(35,28), Roads2DGeneratorPoint(36,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(35,28), Roads2DGeneratorPoint(35,29));
    components.addConnectedPoints(Roads2DGeneratorPoint(35,29), Roads2DGeneratorPoint(35,30));
    components.addConnectedPoints(Roads2DGeneratorPoint(35,30), Roads2DGeneratorPoint(36,30));
    components.addConnectedPoints(Roads2DGeneratorPoint(36,19), Roads2DGeneratorPoint(37,19));
    components.addConnectedPoints(Roads2DGeneratorPoint(36,21), Roads2DGeneratorPoint(37,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(36,28), Roads2DGeneratorPoint(37,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(36,30), Roads2DGeneratorPoint(37,30));
    components.addConnectedPoints(Roads2DGeneratorPoint(37,19), Roads2DGeneratorPoint(37,20));
    components.addConnectedPoints(Roads2DGeneratorPoint(37,20), Roads2DGeneratorPoint(37,21));
    components.addConnectedPoints(Roads2DGeneratorPoint(37,28), Roads2DGeneratorPoint(38,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(37,30), Roads2DGeneratorPoint(38,30));
    components.addConnectedPoints(Roads2DGeneratorPoint(37,33), Roads2DGeneratorPoint(38,33));
    components.addConnectedPoints(Roads2DGeneratorPoint(37,33), Roads2DGeneratorPoint(37,34));
    components.addConnectedPoints(Roads2DGeneratorPoint(37,34), Roads2DGeneratorPoint(37,35));
    components.addConnectedPoints(Roads2DGeneratorPoint(37,35), Roads2DGeneratorPoint(37,36));
    components.addConnectedPoints(Roads2DGeneratorPoint(37,36), Roads2DGeneratorPoint(38,36));
    components.addConnectedPoints(Roads2DGeneratorPoint(38,28), Roads2DGeneratorPoint(39,28));
    components.addConnectedPoints(Roads2DGeneratorPoint(38,30), Roads2DGeneratorPoint(39,30));
    components.addConnectedPoints(Roads2DGeneratorPoint(38,33), Roads2DGeneratorPoint(39,33));
    components.addConnectedPoints(Roads2DGeneratorPoint(38,36), Roads2DGeneratorPoint(39,36));
    components.addConnectedPoints(Roads2DGeneratorPoint(39,28), Roads2DGeneratorPoint(39,29));
    components.addConnectedPoints(Roads2DGeneratorPoint(39,29), Roads2DGeneratorPoint(39,30));
    components.addConnectedPoints(Roads2DGeneratorPoint(39,33), Roads2DGeneratorPoint(39,34));
    components.addConnectedPoints(Roads2DGeneratorPoint(39,34), Roads2DGeneratorPoint(39,35));
    components.addConnectedPoints(Roads2DGeneratorPoint(39,35), Roads2DGeneratorPoint(39,36));

    std::vector<Roads2DGeneratorConnectedComponent> vComponents = components.getComponents();
    int nExpectedPoints = 480;
    int nSumPoints = 0;
    Roads2DGeneratorConnectedComponent vUniquePoints;
    for (int i = 0; i < vComponents.size(); i++) {
        const std::vector<Roads2DGeneratorPoint> &vPoints = vComponents[i].getPoints();
        for (int t = 0; t < vPoints.size(); t++) {
            vUniquePoints.addPoint(vPoints[t]);
        }

        std::cerr << i << ": size=" << vPoints.size() << std::endl;
        for (int t = 0; t < vPoints.size(); t++) {
            std::cerr << "(" << vPoints[t].getX() << "," << vPoints[t].getY() << ") ";
        }
        nSumPoints += vPoints.size();
        std::cerr << std::endl;
    }
    if (nExpectedPoints != vUniquePoints.getPoints().size()) {
        std::cerr
            << "Expected unique " << nExpectedPoints << " points"
            << ", but got unique " << vUniquePoints.getPoints().size() << " points"
            << std::endl;
        return 1;
    }
    if (nSumPoints != nExpectedPoints) {
        std::cerr
            << "Expected " << nExpectedPoints << " points"
            << ", but got " << nSumPoints
            << std::endl;
        return 1;
    }
    std::cerr << std::endl;
    if (vComponents.size() != 2) {
        std::cerr
            << "Expected 2 "
            << ", but got " << vComponents.size()
            << std::endl;
        return 1;
    }
    if (vComponents[0].getPoints().size() != 470) {
        std::cerr
            << "Expected 470 points "
            << ", but got " << vComponents[0].getPoints().size()
            << std::endl;
        return 1;
    }
    if (vComponents[1].getPoints().size() != 10) {
        std::cerr
            << "Expected 10 "
            << ", but got " << vComponents[1].getPoints().size()
            << std::endl;
        return 1;
    }
    return 0;
}