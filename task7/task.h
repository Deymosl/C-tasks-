#ifndef CASE7_TASK_H
#define CASE7_TASK_H

#include <cstddef>
#include <ostream>
template<class T>
struct Array {
    explicit Array(size_t size = 0, const T &value = T()) : size_(size) {
        data_ = new T[size_];
        for (size_t i = 0; i < size_; i++)
            data_[i] = value;
    };

    Array(Array const &a) : size_(a.size()) {
        data_ = new T[size_];
        for (size_t i = 0; i < size_; i++)
            data_[i] = a[i];
    };

    Array &operator=(Array const &a) {
        if (&a != this) {
            if (size_ != a.size()) {
                delete[] data_;
                size_ = a.size();
                data_ = new T[size_];
            }
            for (size_t i = 0; i < size_; i++)
                data_[i] = a[i];
        }
        return *this;
    };

    ~Array() {
        delete[] data_;
    };

    size_t size() const {
        return size_;
    };

    T &operator[](size_t i) {
        return data_[i];
    };

    T const &operator[](size_t i) const {
        return data_[i];
    };


private:
    size_t size_;
    T *data_;
};

template <class T, class Func>
T minimum(const Array<T> &q, Func f) {
    T min = q[0];
    for (size_t i = 1; i < q.size(); i++)
        min = f(min, q[i]) ? min : q[i];
    return min;
};

template <class T>
void flatten(const Array<T> &q, std::ostream& os) {
    for (size_t i = 0; i < q.size(); i++)
        os << q[i] << " ";
}

template <class T>
void flatten(const Array<Array<T>> &q, std::ostream& os) {
    for (size_t i = 0; i < q.size(); i++)
        flatten(q[i], os);
}

#endif //CASE7_TASK_H
