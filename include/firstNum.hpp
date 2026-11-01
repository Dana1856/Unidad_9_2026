#ifndef FIRSTNUM_HPP
#define FIRSTNUM_HPP

namespace Numbers {
    const int MAX_SIZE = 100;

    struct IntegerList {
        int elements[MAX_SIZE];
        int counter;
    };

    void fillArray(IntegerList &list);
    void displayArray(const IntegerList &list);
}

#endif