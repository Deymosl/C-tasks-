#ifndef CASE8_FTH_H
#define CASE8_FTH_H

template<class T>
bool isSameObject(T const *q, T const *w)
{
    return dynamic_cast<void const*>(q) == dynamic_cast<void const*>(w);
}

#endif //CASE8_FTH_H
