#ifndef CASE8_TRD_H
#define CASE8_TRD_H

template<typename T, typename Func>
bool compare(T const &a, T const &b, Func mptr)
{
    return (a.*mptr)() < (b.*mptr)();
}

#endif //CASE8_TRD_H
