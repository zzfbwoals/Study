#include "EvenRandom.h"
#include <cstdlib>
#include <ctime>

EvenRandom::EvenRandom() {
    srand((unsigned)time(0)); // 시드 설정
}

int EvenRandom::next() {
    return (rand() / 2) * 2; // 0에서 RAND_MAX 사이의 짝수 난수 반환
}

int EvenRandom::nextInRange(int low, int high) {
    int range = (high - low + 1) / 2; // 짝수 범위 계산
    return low + (rand() % range) * 2; // low와 high 사이의 짝수 난수 반환
}