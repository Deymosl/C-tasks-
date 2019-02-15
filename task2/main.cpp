#include <iostream>
#include <cstring>

class Student {
private:
    int admno;
    char *sname;
    float eng, math, science, total;
    static const int sz = 21; // 21 is to make output correct (
    float ctotal() const {
        return (eng + math + science);
    }

public:
    Student() : sname(new char[sz]) {}
    void Takedata(int admno1, char* sname1, float eng1, float math1, float science1) { // видимо, в задании пропустили math
        admno = admno1;
        eng = eng1;
        math = math1;
        science = science1;
        strncpy(sname, sname1, sz);
        total = ctotal();
    }

    void Showdata() {
        std::cout << "admno: " << admno << '\n' << "sname: " << sname << '\n' << "math: " << math << '\n';
        std::cout << "science: " << science << '\n' << "total: " << total << '\n';

    }

    ~Student() {
        delete[] sname;
    }
};

int main() {
    Student student;
    student.Takedata(3, "12345678901234567890", 23, 24, 12);
    student.Showdata();
    return 0;
}