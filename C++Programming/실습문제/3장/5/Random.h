#ifndef RANDOM_H
#define RANDOM_H

class Random
{
public:
    Random();
    int next();
    int nextInRange(int x, int y);
};

#endif