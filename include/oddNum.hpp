#ifndef ODDNUM_HPP
#define ODDNUM_HPP

namespace Numbers {
    const int MAX_ODDS = 50;

    struct OddList {
        int elements[MAX_ODDS];
        int count;
    };

    void generateOdds(OddList &list);
    void displayOdds(const OddList &list);
}

#endif