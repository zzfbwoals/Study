#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Random.h"

Random::Random()
{
    srand((unsigned)time(0));
}

int Random::next()
{
    return rand();
}

int Random::nextInRange(int x, int y)
{
    return (rand() % (y-x+1)) + x;
}