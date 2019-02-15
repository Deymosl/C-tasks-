#include <iostream>


class MyClass {
public:
    explicit MyClass(int a1, int b1, int c1) {
        a = a1;
        b = b1;
        c = c1;
    }

    MyClass(const MyClass &q) : a(q.a), b(q.b), c(q.c) {
    }


    void addToA(int q = 3) {
        a += q;
    }

    void addToA(int *q) {
        a += *q;
    }

    int &gimmeA() {
        return a;
    }

    int copyA() const {
        return a;
    }

private:
    int a, b, c;
};

int main() {
    MyClass a = MyClass(1, 1, 1);
    a.gimmeA() = 5;
    std::cout << a.copyA() << std::endl;

    return 0;
}