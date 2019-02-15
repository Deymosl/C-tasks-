#include <iostream>
#include "Mstring.h"

int main() {
    char* f = "34342";
    Mstring q = f;
    q.append(q);
    std::cout << q[5];
    return 0;
}