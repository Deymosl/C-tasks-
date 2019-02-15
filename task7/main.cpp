#include <iostream>
#include "task.h"

bool less(int a, int b) { return a < b; }

struct Greater {
    bool operator()(int a, int b) const { return b < a; }
};

int main() {
    Array<int> ints(3);
    ints[0] = 10;
    ints[1] = 2;
    ints[2] = 15;
    int min = minimum(ints, less);
    int max = minimum(ints, Greater());
    std::cout << min << " " << max << std::endl;
    return 0;
}