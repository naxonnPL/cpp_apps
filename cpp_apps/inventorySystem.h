#pragma once

#include <string>
#include <vector>

struct item {
    std::string nazwa;
    int rzadkosc = 0;
    float waga = 0.0f;
};


void inventory();