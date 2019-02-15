#include <iostream>
#include "trd.h"

int main() {
    std::string s1("Elf");
    std::string s2("Archer");
    std::cout << compare(s1, s2, &std::string::size) << compare(s2, s1, &std::string::size);
    return 0;
}