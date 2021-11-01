//
// Created by Finlay on 01.11.2021.
//

#ifndef CPP_ALGORITHMS_SORTING_ALGO_H
#define CPP_ALGORITHMS_SORTING_ALGO_H
#endif //CPP_ALGORITHMS_SORTING_ALGO_H

#include <vector>

namespace cpp_algorithms {

    template<typename T>
    class SortingAlgo {
    public:
        virtual std::vector<T> Sort(std::vector<T> &) = 0;
    };

}