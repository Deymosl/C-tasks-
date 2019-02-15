#include "rTriple.h"

rTriple::rTriple(int32_t s1 = 0, int32_t s2 = 0, int32_t s3 = 0) : d(3) {
    d[0] = s1;
    d[1] = s2;
    d[2] = s3;
}

rTriple::rTriple(const rTriple &source) {
    for (size_t i = 0; i < 3; i++)
        d[i] = source[i];
}

rTriple::~rTriple() {
    d.clear();
}

rTriple rTriple::operator+() const {
    if (*this == 0)
        return *this;
    rTriple temp = rTriple(-d[0], d[1], -d[2]);
    return temp;
}

rTriple rTriple::operator-() const {
    if (*this == 0)
        return *this;
    rTriple temp = rTriple(d[0], -d[1], d[2]);
    return temp;
}

rTriple rTriple::operator~() const {
    rTriple res(d[0], -(d[1] + 1), d[2]);
    return res;
}

rTriple &rTriple::operator=(const rTriple &source) {
    for (size_t i = 0; i < 3; i++)
        d[i] = source[i];
    return *this;
}

rTriple &rTriple::operator+=(const rTriple &q) {
    d[0] -= q[0];
    d[1] += q[1];
    d[2] -= q[2];
    return *this;
}

rTriple &rTriple::operator-=(const rTriple &q) {
    d[0] += q[0];
    d[1] -= q[1];
    d[2] += q[2];
    return *this;
}

rTriple &rTriple::operator*=(const rTriple &source) {
    if (source[0] == 0)
        d[0] = INT32_MAX;
    else d[0] /= source[0];
    d[1] *= source[1];
    if (source[2] == 0)
        d[2] = INT32_MAX;
    else d[2] /= source[2];
    return *this;
}

rTriple &rTriple::operator/=(const rTriple &source) {
    d[0] *= source[0];
    if (source[1] == 0)
        d[1] = INT32_MAX;
    else d[1] /= source[1];
    d[2] *= source[2];
    return *this;
}

rTriple &rTriple::operator%=(const rTriple &q) {
    for (size_t i = 0; i < 3; i++)
        d[i] %= q[i];
}

bool operator==(const rTriple &q, const rTriple &w) {
    return (q[0] == w[0] && q[1] == w[1] && q[2] == w[2]);
}

bool operator!=(const rTriple &q, const rTriple &w) {
    return !(q == w);
}

bool operator<(const rTriple &q, const rTriple &w) {
    for (size_t i = 0; i < 3; i++) {
        if (q[i] < w[i])
            return true;
        else if (q[i] > w[i])
            return false;
    }
    return false;
}

bool operator>(const rTriple &q, const rTriple &w) {
    return w < q;
}

bool operator>=(const rTriple &q, const rTriple &w) {
    return !(q < w);
}

bool operator<=(const rTriple &q, const rTriple &w) {
    return !(q > w);
}

rTriple &rTriple::operator&=(const rTriple &q) {
    d[0] |= q[0];
    d[1] ^= q[1];
    d[2] &= q[2];
    return *this;
}

rTriple &rTriple::operator|=(const rTriple &q) {
    d[0] ^= q[0];
    d[1] &= q[1];
    d[2] |= q[2];
    return *this;
}


rTriple &rTriple::operator^=(const rTriple &q) {
    d[0] &= q[0];
    d[1] |= q[1];
    d[2] ^= q[2];
    return *this;
}

rTriple operator&(rTriple q, const rTriple &w) {
    return q &= w;
}

rTriple operator|(rTriple q, const rTriple &w) {
    return q |= w;
}

rTriple operator^(rTriple q, const rTriple &w) {
    return q ^= w;
}

rTriple &rTriple::operator<<=(unsigned int q) {
    d[0] >>= q;
    d[1] <<= q;
    d[2] >>= q;
    return *this;
}

rTriple &rTriple::operator>>=(unsigned int q) {
    d[0] <<= q;
    d[1] >>= q;
    d[2] <<= q;
    return *this;
}

rTriple operator<<(rTriple q, unsigned int w) {
    return (q <<= w);
}

rTriple operator>>(rTriple q, unsigned int w) {
    return (q >>= w);
}

int32_t rTriple::operator[](size_t pos) const {
    if (pos < 3)
        return d[pos];
    return 0;
}

rTriple operator-(rTriple q, const rTriple &w) {
    return q -= w;
}

rTriple operator+(rTriple q, const rTriple &w) {
    return q += w;
}

rTriple operator*(rTriple q, const rTriple &w) {
    return q *= w;
}

rTriple operator/(rTriple q, const rTriple &w) {
    return q /= w;
}

rTriple operator%(rTriple q, const rTriple &w) {
    return q %= w;
}

std::string to_string(rTriple const &q) {
    std::string res = "";
    for (size_t i = 0; i < 3; i++)
        res += q[i];
    return res;
}

std::ostream &operator<<(std::ostream &os, const rTriple &q) {
    std::string res = to_string(q);
    os << res;
    return os;
}

rTriple &rTriple::operator++() {
    *this += rTriple(1, 1, 1);
    return *this;
}

rTriple &rTriple::operator--() {
    *this -= rTriple(1, 1, 1);
    return *this;
}

rTriple rTriple::operator++(int) {
    rTriple res(*this);
    ++res;
    return res;
}

rTriple rTriple::operator--(int) {
    rTriple res(*this);
    --res;
    return res;
}





