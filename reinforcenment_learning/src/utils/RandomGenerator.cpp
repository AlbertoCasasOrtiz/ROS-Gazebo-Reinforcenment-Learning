//
// Created by alberto on 6/09/19.
//

#include "RandomGenerator.h"
#include <iostream>
#include <time.h>
#include "RandomGenerator.h"

std::mt19937 RandomGenerator::mt(time(nullptr));

float RandomGenerator::getFloat(float start, float end) {
    std::uniform_real_distribution<float> dist(start, end);
    return dist(mt);
}

int RandomGenerator::getInt(int start, int end) {
    std::uniform_int_distribution<int> dist(start, end-1);
    return dist(mt);
}