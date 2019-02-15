//
// Created by User on 15.02.2019.
//

#ifndef CASE9_T2_H
#define CASE9_T2_H

template<class T>
struct Array
{
    explicit Array(size_t size = 0);
    Array(Array const& a);
    Array & operator=(Array const& a);
    ~Array();

    size_t size() const;
    T &         operator[](size_t i);
    T const&    operator[](size_t i) const;

    //перемещающий конструктор
    Array(Array && a): size_(a.size_), data_(a.data_) {
        a.size_ = 0;
        a.data_ = nullptr;
    }

    //перемещающий оператор присваивания
    Array &operator=(Array && a) {
        std::swap(data_, a.data_);
        std::swap(size_, a.size_);
        return *this;
    }

private:
    size_t  size_;
    T *     data_;
};

#endif //CASE9_T2_H
