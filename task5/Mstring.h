#ifndef CASE5_MSTRING_H
#define CASE5_MSTRING_H

#include <cstring>

class Mstring {
public:
    Mstring(const char *source) {
        if (source) {
            size_ = strlen(source);
            data = new char[size_ + 1];
            strcpy(data, source);
        } else {
            size_ = 0;
            data = new char[1];
        }
    }

    Mstring(unsigned n, char s) {
        size_ = n;
        data = new char[size_ + 1];
        for (size_t i = 0; i != size_; i++)
            data[i] = s;
    }

    size_t size() const {
        return size_;
    }

    Mstring(const Mstring &source) : size_(source.size()), data(new char[size_ + 1]) {
        for (size_t i = 0; i < size_; i++)
            data[i] = source.data[i];
    }

    void append(const Mstring &source) {
        char *temp = new char[size_ + source.size() + 1];
        for (size_t i = 0; i < size_; i++)
            temp[i] = data[i];
        for (size_t i = 0; i < source.size(); i++)
            temp[i + size_] = source.data[i];
        temp[size_ + source.size()] = 0;
        delete[] data;
        data = temp;
        size_ += source.size();

    }

    Mstring &operator=(Mstring const& source) {
        if (this != &source) {
            delete [] data;
            size_ = source.size();
            data = new char[size_ + 1];
            for (size_t i = 0; i != size_; i++)
                data[i] = source.data[i];
        }
        return *this;
    }

    ~Mstring() {
        delete[] data;
    }

private:
    size_t size_;
    char *data;
};

#endif //CASE5_MSTRING_H
