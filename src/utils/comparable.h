//
// Created by Finlay on 01.11.2021.
//

#ifndef CPP_ALGORITHMS_COMPARABLE_H
#define CPP_ALGORITHMS_COMPARABLE_H
#endif //CPP_ALGORITHMS_COMPARABLE_H

namespace cpp_algorithms {
    template<typename T>
    class Comparable {
    public:
        virtual bool operator<(T const &other) const = 0;

        virtual bool operator>(T const &other) const = 0;
    };
}