//
// Created by User on 15.02.2019.
//

#ifndef CASE9_T1_H
#define CASE9_T1_H

#include <ostream>
#include <typeinfo>

void print_values(std::ostream &os) {
}

template <typename T, typename... Args>
void print_values(std::ostream &os, T q, Args... args) {
    os << typeid(q).name() << ": " << q << '\n';
    print_values(os, args...);
}

#endif //CASE9_T1_H
