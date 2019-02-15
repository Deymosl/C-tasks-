#ifndef CASE11_T1_H
#define CASE11_T1_H

#include <string>
#include <sstream>
#include <exception>

class bad_from_string : public std::exception {
public:
    bad_from_string(std::string msg) : msg_(msg) {};

    std::string what() {
        return msg_;
    }

private:
    std::string msg_;
};

template<class T>
T from_string(std::string const &s) {
    std::istringstream is(s);
    T ans;
    is >> std::noskipws >> ans;

    if (is.fail() || is.peek() != EOF) { //peek and fail in correct order
        throw bad_from_string("Invalid string");
    }
    return ans;
}

#endif //CASE11_T1_H
