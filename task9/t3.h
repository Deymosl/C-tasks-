//
// Created by User on 15.02.2019.
//

#ifndef CASE9_T3_H
#define CASE9_T3_H

#include <tuple>

template<unsigned first, unsigned second, typename T>
auto to_pair(T t) -> decltype(std::make_pair(std::get<first>(t), std::get<second>(t))) {
    return std::make_pair(std::get<first>(t), std::get<second>(t));
}

#endif //CASE9_T3_H
