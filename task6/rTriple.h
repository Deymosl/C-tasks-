#ifndef CASE6_RTRIPLE_H
#define CASE6_RTRIPLE_H


#include <algorithm>
#include <string>
#include <vector>

class rTriple {
public:
    rTriple(const rTriple &source);

    rTriple(int32_t s1 = 0, int32_t s2 = 0, int32_t s3 = 0);

    ~rTriple();

    rTriple operator+() const;

    rTriple operator-() const;

    rTriple operator~() const;

    rTriple &operator++();

    rTriple &operator--();

    rTriple operator++(int);

    rTriple operator--(int);

    rTriple &operator=(const rTriple &source);

    rTriple &operator+=(const rTriple &source);

    rTriple &operator-=(const rTriple &source);

    rTriple &operator/=(const rTriple &source);

    rTriple &operator*=(const rTriple &source);

    rTriple &operator%=(const rTriple &source);

    rTriple &operator|=(const rTriple &source);

    rTriple &operator&=(const rTriple &source);

    rTriple &operator^=(const rTriple &source);

    rTriple &operator<<=(unsigned int rhs);

    rTriple &operator>>=(unsigned int lhs);

    friend rTriple operator+(rTriple q, const rTriple &w);

    friend rTriple operator-(rTriple q, const rTriple &w);

    friend rTriple operator*(rTriple q, const rTriple &w);

    friend rTriple operator/(rTriple q, const rTriple &w);

    friend rTriple operator%(rTriple q, const rTriple &w);


    friend rTriple operator&(rTriple q, const rTriple &w);

    friend rTriple operator|(rTriple q, const rTriple &w);

    friend rTriple operator^(rTriple q, const rTriple &w);

    friend rTriple operator<<(rTriple q, unsigned int w);

    friend rTriple operator>>(rTriple q, unsigned int w);

    friend bool operator==(const rTriple &q, const rTriple &w);

    friend bool operator!=(const rTriple &q, const rTriple &w);

    friend bool operator>=(const rTriple &q, const rTriple &w);

    friend bool operator<=(const rTriple &q, const rTriple &w);

    friend bool operator>(const rTriple &q, const rTriple &w);

    friend bool operator<(const rTriple &q, const rTriple &w);

    friend std::string to_string(const rTriple &q);

    friend std::ostream &operator<<(std::ostream &s, const rTriple &q);

    int32_t operator[](size_t q) const;


private:
    std::vector<int32_t> d;
};

#endif //CASE6_RTRIPLE_H
