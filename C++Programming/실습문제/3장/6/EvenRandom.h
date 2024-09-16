#ifndef EVENRANDOM_H
#define EVENRANDOM_H

class EvenRandom {
public:
    EvenRandom();
    int next(); // 0에서 RAND_MAX 사이의 짝수 난수 반환
    int nextInRange(int low, int high); // low와 high 사이의 짝수 난수 반환
};

#endif